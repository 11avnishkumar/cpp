// Program to show the concept of call by address or call by pointer
#include<stdio.h>
int swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){

  int a = 10,b = 20;
  swap(&a,&b);
  printf("The value of a and b is %d and %d respectively",a,b);
  
  return 0;
}
/*
   In call by Address the value of a and b get changed.
   Pointer is very powerful concept it has the ability to change
   the value of the variable that is declared inside another function.
*/