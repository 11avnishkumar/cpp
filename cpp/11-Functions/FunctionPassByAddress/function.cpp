#include<iostream>
using namespace std;
int swap(int *a,int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  return 0;
}
int main(){
  // Program to demonstrate the concept of function call by address
  int x = 10; int y = 20;
  swap(x,y);
  cout<<x<<" "<<y<<endl;
  return 0;
}