#include<iostream>
using namespace std;
void fun(){
  int a = 10;
  a++;
  cout<<a<<endl;
}
int main(){
  //Program to demonstrate the example of local variables.
  //cout<<a<<endl; // The variable a can not accessed here it will
  // it will throw error because it is declared inside the fun() function
  // and it can be accessed inside the fun() function only.
}