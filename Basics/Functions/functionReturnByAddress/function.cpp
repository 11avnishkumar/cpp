#include<iostream>
using namespace std;
int  * fun(){
  int x = 10;
  //return &x; // we can not return the address of local variable
  //because once the function execution finished it will get deleted
  //automatically.
  //We can return addresses only the variable or function that has 
  //Memory allocated in heap.

  int *p = new int[5];
  cout<<p<<endl;
  for(int i = 0; i<5; i++){
    p[i] = 5 * i;
  }
  return p;
}
int main(){
  // Program to demonstrate the function return address
  // function can also return addresses
  int *q = fun();
  cout<<q<<endl;
  for(int i=0; i<5; i++){
    cout<<q[i]<<endl;
  }
  
}