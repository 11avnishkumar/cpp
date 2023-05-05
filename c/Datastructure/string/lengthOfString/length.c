#include<stdio.h>
 int main(){
    char *string;
    int i;
    printf("Enter the string\n");
    scanf("%s",string);
    for(i=0; string[i] != '\0'; i++){}
    printf("Length is %d",i);

    return 0;
 }