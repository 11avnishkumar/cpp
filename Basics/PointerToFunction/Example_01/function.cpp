#include<iostream>
using namespace std;
int max(int x,int y)
{
    return x > y ? x : y;
     
}
int min(int x ,int y){
  return x < y ? x : y;
   
}
int main()
{
  // Program to demonstrate the example of function to pointer

  // datatype (*pointer_name) (int,int) //if the function have parameter then pass only parameter data type not parameter
  int (*func)(int,int); // Pointer initialization
   func = max(x,y);
  (*func) = (10,5);



}