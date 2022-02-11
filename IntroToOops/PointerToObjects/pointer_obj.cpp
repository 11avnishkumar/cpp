#include<iostream>
using namespace std;
// Rectangle class
class Rectangle{
  
  public:
  int length;
  int breadth;
  /* Methods */
  int area(){
    return length * breadth;
  }
  int perimeter(){
    return 2*(length+breadth);
  }
};
int main(){
// Program to show the concepts of pointer to objects
Rectangle r1;
Rectangle *p; // pointer of type rectangle.
p = &r1; // p stores the address of object/instance of Rectangle class 'r1'
p->length = 10;
p->breadth = 10;
cout<<p->area()<<endl;
cout<<p->perimeter()<<endl;
return 0; 
}
/* 

In pointer to object:
1.we user '->' arrow operator to access and assign the value of class members/method,
rather then (.)dot operator.
2.It is also known as de-refrencing operator.
3.The pointer variable also created in stack section.
// some examples
Rectangle *p //create object in stack.
Rectangle *q = new Rectangle() // create objects in 'heap memory' 

*/