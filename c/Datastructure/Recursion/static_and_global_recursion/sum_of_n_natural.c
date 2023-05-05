// Program to demonstrate sum of N natural number using recursion.
#include<stdio.h>
int fun(int n){
    if(n > 0)
        return fun(n - 1) + n;
    else
        return 0;
}

int main(){
int fun(int n);
int r;
r = fun(5);
printf("%d\n", r);
return 0;
}
/*
Above Program demonstrate how the static and global variable works
in recursion.
*/