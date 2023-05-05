// Program to demonstrate 2D arrays
#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    
    /* Array of ponters */
    int *B[3];
    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

return 0;
}

/* The above program is not completed yet*/
