#include<iostream>
using namespace std;
// Base class
class Base{
  
  public:

  int a;

  void display(){
    cout<<"Display of Base: "<<a<<endl;

  }
};

// Derived class
class Derived:public Base{
  public:
  void show(){
    cout<<"show of derived class"<<endl;
  }
};
int main(){
  // Write a program to show the concept of inheritance
  // create a object
  
  Base b;
  b.display();

  /* 
  above the object of base class is created and display function called.
  */

  // Derived class object
  Derived d;
  d.a = 100; //This variable is available in Base class.
  d.display(); //This method is available in Base class.
  d.show(); // This method available in derived class.

  /*
    Since derived class inheriting from the  base class , therfore display() method will also available in 
    Derived class.
    Note: In inheritance all the method as well as properties of parent/base class get inherited by child/derived class. 
  */

}