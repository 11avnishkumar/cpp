// Program to implement exponent or power using recursion
#include<stdio.h>
int power(int m,int n){
    if(n > 0)
     return power(m ,n - 1) * m;
    return 1;
}
int main(){
int r;
r = power(5,2);
printf("%d ",r);

}
