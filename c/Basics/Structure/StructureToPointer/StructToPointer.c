/* 

Program to demonstrate the structure to pointer

*/

#include<stdio.h>
struct Rectangle{
int length;
int breadth;
};

int main(){
struct Rectangle r = {10, 20}; // Declarations + Initialization

struct Rectangle *p = &r; // Address of structure is stored in pointer

printf("Length = %d ",p->length);
printf("Breadth = %d ",p->breadth);

}


/* 

Point To Remember
When the variable of type sturcture is pointer then we use Arrow Operator
To access and assign the value to the structure member.

*/

