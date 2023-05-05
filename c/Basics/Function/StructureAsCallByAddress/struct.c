/* 

Program,Passing structure as pramater to function by callbyvalue

*/

#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle *r1, int l){
    r1->length = l;
    return (r1->length) * (r1->breadth);
}
int main(){
int area(struct rectangle *r1,int l);
struct rectangle r={10,20};
printf("Previous value of length: %d\n",r.length);
printf("Previous value of breadth: %d\n",r.breadth);
printf("Area is = %d\n",area(&r,5));
printf("New value of length: %d",r.length);

return 0;
}