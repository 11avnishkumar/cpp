#include<stdio.h>
int main(){
    int x,result;
    printf("Enter a number:");
    scanf("%d",&x);
    result = ++x + x++;
    printf("%d\n",x);
    printf("Result is %d",result);
    return 0;

}