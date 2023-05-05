// Program to implemnt Sum using Recursion
#include<stdio.h>
int sum(int n){
    if(n > 0)
      return sum(n - 1) + n;
    return 0;
}
int main(){

 int r;
 r = sum(10);
 printf("%d ",r);
 return 0;
}

