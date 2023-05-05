#include<stdio.h>
int factorial(int n){
 if(n > 0)
    return factorial(n - 1) * n;
 return 1;
}


int main(){
    int r;
    r = factorial(5);
    printf("%d ",r);
return 0;
}
// if recursion enters into infinite loop then it will stop eventually
// because of stack overflowe, recursion uses stack internally