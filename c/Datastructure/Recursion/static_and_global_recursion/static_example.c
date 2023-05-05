// Program to demonstrate working of static variable using recursion.
#include<stdio.h>
int fun(int n){
    int static x = 0;
    if(n > 0){
        x++;
        return fun(n - 1) + x;
    }
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
This program using static variable
static variable retains the values that is never reinitialize the value of variable when the
function call finished executions.
*/