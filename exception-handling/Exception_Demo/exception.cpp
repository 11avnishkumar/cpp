#include<iostream>
using namespace std;
int main(){
  int x = 10, y = 0, z;
  try{
    if(y==0)
        throw 1; // here we throw integer value it could be anything,it may be double,float,class etc
      z = x / y;
      cout<<"The result is: "<<z<<endl;    
  }
  catch(int e){
    // Since we have throw 1 and 1 is integer value that is why we have used int variable e in the catch block,whatever the excepition will be thrown that will be
    // copied into "e".
    cout<<"Divison with zero is not possible "<<e<<endl;
  }
  return 0;
}

// Note: we have throw 1. we can throw any value other than 1, 2, 5 and so on