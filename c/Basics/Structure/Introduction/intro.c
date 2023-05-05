/* 

Program to demonstrate the use of Structure
*/

#include<stdio.h>
struct Rectangle{
int length;
int breadth;
};

int main(){
// struct Rectangle r; // Declaration
struct Rectangle r = {10, 20}; // Declarations + Initialization
printf("%d ",r.length);
printf("%d ",r.breadth);

}

/*

1. Structure does not occupy spaces in memeory unless an object is created.

2. struct Rectangle r; // syntax for creating structure variable or object

3. The above structure occupy memory in stack area.

*/