#include<stdio.h>
int main(){
  // Program to show the working of while loop
  int n,i=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  while(i<n){
    printf("%d\n",i);
    i++;
  }
  
  return 0;
}