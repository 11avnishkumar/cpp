#include<stdio.h>
int main(){
  // Program to show the working of while loop
  int x = 10;
  int *p; // pointer or refrencing or pointer to integer variable
  p = &x; // storing address of x into p
  printf("value of x %d ",x);
  printf("\n");
  printf("Address of x %d ",p);
  printf("\n");
  printf("Address of p itself %d ",&p);
  printf("\n");
  printf("Actual value stored in p %d ",*p); // Defrencing
  return 0;
}