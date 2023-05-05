// Program to demonsrate working of global variable in  recrusion
#include<stdio.h>
int x = 0;
int fun(int n){
    if(n > 0){
        x++;
        return fun(n - 1) + x;
    }
    else
        return 0;
}

int main(){
int fun(int n);
int r,r2;
r = fun(5);
printf("%d\n", r);
r2 = fun(5);
printf("%d\n", r2);
return 0;
}
/*
Both static and global variable give the sum ouptut when they used in 
Recursion.
if we call the above function we will get two different ouptut
1.very first output will be 25
2.Second Output will be 50
*/