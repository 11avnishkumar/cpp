#include<iostream>
using namespace std;
int max(int x,int y){
  return x+y;
}
int max(int x,int y,int z){
  return x+y+z;
}
int main(){
  // Program to show the concept of function overloading in c++
  int a = 10; int b = 30; int c = 20;
  cout<<max(a,b)<<endl;
  cout<<max(a,b,c)<<endl;

}

/* 

A function overloading is style of programming where a programmer
define several functions with same name but with different paramters
Note: the parameters and the data type of the parameters either of them should not match
with the previous function otherwise it will throw an error.

 */