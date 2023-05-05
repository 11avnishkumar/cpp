/*

program to demostrate function returning an array.

*/

#include<stdio.h>
#include<stdlib.h> // for dynamic memory allocation

int * fun(int n){
    int *p;
    p = (int *) malloc(n*sizeof(int));
    return p;
}


int main(){
    int * fun(int n);
    int *A;
    A = fun(5); // Address will be stored here
    for(int i=0;i<5;i++)
      printf("%d\n",A);
    return 0;
}

/*

There is two method for returning an array by function

 int * fun(int n)  This will point only single or collection of array
 or
 int [] fun(int n)  This will point only for the array

*/

/* 
1. The Job of fun function is create a dynamic memory in Heap area.

2. After creating Dynamic space in Heap area it will get deleted and returns to the main functions.


*/