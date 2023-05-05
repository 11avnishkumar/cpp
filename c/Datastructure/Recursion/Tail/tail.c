// Write a program to implement Tail Recursion
#include<stdio.h>
//Printing Number from 10 to 1 using recursion
int recursion(int n){
if(n>0){
    printf("%d\n",n);
    recursion(n-1);
}
return 0;
}
int main()
{
    int recursion(int n);
    int number;
    // printf("Enter the Number:");
    // scanf("%d",number);
    number = 10;
    recursion(number);
   return 0; 
}
/*
Output
10
9
8
.
.
.
1

*/
// Time complexity O(n)
// Space complexity O(n), because uses stack internally