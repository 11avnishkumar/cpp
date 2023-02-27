#include<iostream>
using namespace std;
int main(){
  // Program to demonstrate the example of Refrence type in c++
  int x = 10;
  int &y = x;
  cout<<y<<endl; // Output will be 10
  // The point to be note that a refrence never ocupies memory.
  // We can intialize refrece only once at the time of declaration.
  // after no further initialization allowed.

  return 0;
}