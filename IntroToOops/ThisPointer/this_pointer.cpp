#include<iostream>
using namespace std;
class Rectangle{
  // Program to demonstrate the 'this pointer'
  // This pointer is generally used to differentiate between the function's local parameter to those
  // of class variable.
  private:
  // Data hiding
  int length;
  int breadth;

  public:
   Rectangle(int length,int breadth){
     this->length = length;
     this->breadth = breadth;
   }
   int area(){
     return length * breadth;
   }
};

int main(){
  Rectangle r1(10,5);
  cout<<"The area: "<<r1.area()<<endl;
}