// Write a program to implement Head Recursion
#include<stdio.h>
//Printing Number from one to 10 using recursion
int recursion(int n){
if(n>0){
    recursion(n-1);
    printf("%d\n",n);
}
return 0;
}
int main()
{
    int recursion(int n);
    int number;
    // User input
    // printf("Enter the Number:");
    // scanf("%d",number);
    // End of User input
    number = 10;
    recursion(number);
   return 0; 
}
/*
Output
1
2
3
.
.
. 
10

*/
/* 
Time Complexities
Space complexities
*/