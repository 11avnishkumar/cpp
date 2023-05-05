/*
 Program Passing structure as paramater to function by call by value.
*/
#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle r1){
    return r1.length * r1.breadth;
}
int main(){
int area(struct rectangle r1);
struct rectangle r={10,20};
printf("Area is = %d",area(r));
return 0;
}

/* 
Structure as a Parameter to the functions

1. As we know structure is the collections of mixed data type.
so we can pass it as a parameter to functions, all the memeber of structure will
be pass and we can access it inside the function.
2. Since, Here structure is passed as a call by value there will be seprate copy of all the memeber of structure
will be generated.

3. In call by value actual parameter can not be modified.

*/