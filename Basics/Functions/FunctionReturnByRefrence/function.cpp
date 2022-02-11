#include<iostream>
using namespace std;
int & fun(int &x){
 return x;     
}
int main(){
  // Program to demonstrate the function return by refrence.
  int a = 10;
  fun(a) = 25; // Now here the entire function fun() will be copied here.
  cout<<a<<endl;
}