#include<stdio.h>
int main(){
  // Program to print number from 1 to 10
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  for(int i = 0; i < num; i++){
    printf("%d\n",i);
  }
  return 0;
}