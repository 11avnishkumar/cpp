#include<iostream>
using namespace std;
class MyException:exception{

};
int division(int a,int b){
  if(b==0)
    throw MyException();
  return a / b;   

}
int main(){
  int x = 10, y = 0, z;
  try{
      z = division(x,y);
      cout<<"The result is: "<<z<<endl;    
  }
  /* 
  catch(string e){
    cout<<"Divison with zero is not possible "<<e<<endl;
  } 
  */
  /* catch(double e){
    
    cout<<"Divison with zero is not possible "<<e<<endl;
  } */

  catch(MyException e){
    
    cout<<"Divison with zero is not possible "<<endl;
  }
  return 0;
}

