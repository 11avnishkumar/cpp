/*
 Write a program to demonstrate the static and dynamic array

 */
#include<stdio.h>
#include<stdlib.h>
int main(){
    /* Static Array */
    int A[5] = {4,5,6,7,8}; /* static array always created in stack area */
    for(int i=0; i<5; i++)
        printf("%d ",A[i]);

    /********************************/
    printf("\nDynamic Array\n");
    /********************************/
    /* Dynamic Array */
    int *p;
     p = (int *) malloc(5 * sizeof(int)); /* memory will be allocate for array in heap area. */
     p[0] = 3;
     p[1] = 5;
     p[2] = 7;
     p[3] = 9;
     p[4] = 11;

     for(int i=0; i<5; i++)
        printf("%d ",p[i]);

}