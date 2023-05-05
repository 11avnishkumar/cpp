/* 
Program to demonstrate Array as parameter to the function.

*/


#include<stdio.h>
int fun(int A[],int n){
    for(int i=0; i<n; i++)
        printf("%d\n",A[i]);
    A[3] = 10;  /* We have modified the value from here and 
                this change will reflect in main method or function's Array.
                */  
}

int main(){
    int fun(int A[],int n);
    int p[5] = {1,2,3,4,5};
    fun(p,5);
    printf("Array of main:\n");
    for(int i=0; i<5; i++)
        printf("%d\n",p[i]);
    return 0;
}

/*

There is two method writing above function which accept array as argument

1. int fun(int A[],int n);  accept only array as a parameter
or
2. int fun(int *A ,int n);  accept single a integer value as well as an array.

***** Note *****
Array's can be passed as call by address only, that is why values of array can be modified from another function.
There is no such concept of passing array as a call by value at all be it a C or C++.

*/