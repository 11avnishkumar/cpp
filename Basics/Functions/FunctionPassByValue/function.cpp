#include<iostream>
using namespace std;
int multiply(int x, int y){
  return x * y;
}
int main(){
  // program to show the concept of pass by value
  int a = 10; int b = 5;
  cout<<multiply(10,5)<<endl;
  return 0;
}
// In function pass by value the simply the actual parameters/argument values
// are copied into the formal parameters varible.