#include<stdio.h>
int swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
  // Program to show the working of while loop.
  int a = 10,b = 20;
  swap(a,b);
  printf("The value of a and b is %d and %d respectively",a,b);
  
  return 0;
}
// In call by value the value didn't get change.
