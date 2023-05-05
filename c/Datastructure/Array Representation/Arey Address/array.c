// Program to demonstrate array locations are contigious
#include <stdio.h>
int main(){
    int A[5];
    for(int i=0; i<5; i++){
        printf("%u\n", &A[i]);
    }
}

/*       
    *********Explanation*************        
    1. u = unsigned integer
    2. below are the output when the code run first time, it could
       be diffrent in other system.
    6422016
    6422020
    6422024
    6422028
    6422032
    3. We can clearly see the interger taking 4 byte for each integer.
*/

