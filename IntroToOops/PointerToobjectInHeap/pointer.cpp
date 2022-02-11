#include<iostream>
using namespace std;
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
  // program to demonstrate the use of class
  // creating object
  Rectangle *ptr = new Rectangle(); // breacket is not manadatory but still we have used
  ptr->length = 10;
  ptr->breadth = 10;
  cout<<"The are of rectangle "<<ptr->area()<<endl;
  cout<<"The perimeter of rectangle "<<ptr->perimeter()<<endl;
  return 0;
}