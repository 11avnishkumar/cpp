#include<iostream>
using namespace std;
int swap(int &a,int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
  return 0;
}
int main(){
  // Program to show the concept of call by reference
  int x = 10; int y = 20;
  swap(x,y);
  cout<<x<<" "<<y<<endl;
  return 0;
}
/* 

 1.A call by refrence works exactly the same as call by value does.
 2.It is also able to change the value of a variable inside other function.

 3.The way reference function works is that it will not call the function
 instead of calling function it copied all the instruction from where it has 
 been called/invoked, that is main function oviously.

 4.we should try to avoid writing any complex logic while dealing with
 function call by refrence even if it is a single parameter function.

 Note: when we call a function by call by refrence the function automatically
 becomes the inline function.

 */