// Program to demonstrate the FUNCTION EXCEPTION
#include<iostream>
using namespace std;
int division(int a,int b){
  if(b==0)
      throw 1;
  return a / b;
}
int main(){
  int x = 10, y = 0, z;
  try{

      z = division(x,y);
      cout<<"The result is: "<<z<<endl;    
  }
  catch(int e){
    
    cout<<"Divison with zero is not possible "<<e<<endl;
  }
  return 0;
}

// NOTE: a function either execute completely or raise some exception if it raise some exception then we must catch it.
// and handle the exception gracefully.

