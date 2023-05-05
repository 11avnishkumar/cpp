#include<stdio.h>
int sum(int n){
    if(n>0)
        return n + sum(n-1);
    else 
        return 0;
    return 0;   
}

int main()
{
    while(1){
    int sum(int n); 
    int number;
    printf("Enter a number:");
    scanf("%d",&number);    
    printf("Sum is %d\n",sum(number));
    }
    return 0;
}

// Sum of n natural number with infinite loop