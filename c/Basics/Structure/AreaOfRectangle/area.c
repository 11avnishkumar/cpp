#include<stdio.h>
int main(){
printf("Student detail using structure\n");
    struct rectangle {
        int length;
        int breadth;
    };
    // variable declration of type structure
    struct rectangle area;
    // assigning values to the structure
    area.length = 50;
    area.breadth = 20;
    printf("Area of the rectangle is = %d ",area.length * area.breadth);
    return 0;
}