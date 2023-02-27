#include<iostream>
using namespace std;
class Rectangle{
  // Data members or variable
  /* By default the variable of a class are 'private' in order to make
  them accessible from outside the class they must be declared under the 
  Access specifer 'public'
   */  

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
  Rectangle r1,r2;
  r1.length = 10;
  r1.breadth = 20;
  cout<<"The are of rectangle "<<r1.area()<<endl;
  cout<<"The perimeter of rectangle "<<r1.perimeter()<<endl;
  return 0;
}
/* 
Notes:
1.Class never takes memory as it is logical copy/ blue print.
2.When we create instance of a class that is object then only it occupies
space in the memory.

3.Only variables/data member of the class takes space into memory.
4.Method of the class never takes memeory space into the memory.
*/