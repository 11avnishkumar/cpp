#include<stdio.h>
int main(){
    int x,y,result;
    printf("\n\n\n\n");
    printf("Enter number x:");
    scanf("%d",&x);
    printf("Enter number y:");
    scanf("%d",&y);
    result = x | y;
    printf("Bitwise OR %d\n",result);
    result = x & y;
    printf("Bitwise AND %d\n",result);
    printf("\n\n\n\n");
    return 0;
}