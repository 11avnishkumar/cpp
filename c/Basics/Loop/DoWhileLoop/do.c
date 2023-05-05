#include<stdio.h>
int main(){
  // Program to print number from 1 to 10
  int num,i=0;
  printf("Enter number: ");
  scanf("%d",&num);
  do{
    printf("%d\n",i);
    i++;
  }while(i < num);
  return 0;
}