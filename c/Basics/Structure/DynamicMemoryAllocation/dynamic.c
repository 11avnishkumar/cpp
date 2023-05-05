/* 
Program to demonstrate the Dynamic Memory allocation to
Member of structure.
 */
#include<stdio.h>
#include<stdlib.h>
struct Rectangle{
int length;
int breadth;
};

int main(){
struct Rectangle *p; // Pointer
p = (struct Rectangle *)malloc(4 * sizeof(struct Rectangle)); // Memory allocated dynamically and the pointer will point
p->length = 30; // Assigning values to memeber of structure
p->breadth = 50; // Assigning values to memeber of structure
printf("Length = %d ",p->length);
printf("Breadth = %d ",p->breadth);
free(p); // Deallocate the space of Heap Area
}

/* 

Point To Remember
When the variable of type sturcture is pointer then we use Arrow Operator
To access and asssign the value of the structure member.

*/