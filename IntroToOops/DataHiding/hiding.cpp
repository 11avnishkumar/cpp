#include<iostream>
using namespace std;
class Rectangle{

  private:

  int length; // because length and breadth declared under private access specifer we can not access it directly from the main function,that is outside of the class.
  int breadth;

  public:
  
  void setLength(int l){

    if(l>=0){
      length = l;
    }else{
      length = 0;
    }
    // This methods also known as accessor
  }
  void setBreadth(int b){
    if(b>=0){
      breadth = b;
    }else{
      breadth = 0;
    }
    // This methods also known as accessor
  }
  int getLength(){
    return length;
    // This method also known as mutator
  }
  int getBreadth(){
    return breadth;
    // This method also known as mutator
  }
  /* Methods */
  int area(){
    return length * breadth;
  }
  int perimeter(){
    return 2*(length+breadth);
  }
};

int main(){
// Program to demonstrate the concepts of data hiding.
Rectangle r1;
// r1.length = 10; // here if we try to access the variable of a class directly it will throw error because now they are private member.
// r1.breadth = 20; // here if we try to access the variable of a class directly it will throw error because now they are private member.

r1.setLength(10);
r1.setBreadth(15);
cout<<"Area: "<<r1.area()<<endl;
cout<<"Perimeter: "<<r1.perimeter()<<endl;
cout<<"Length: "<<r1.getLength()<<endl;
cout<<"Breadth: "<<r1.getBreadth()<<endl;

return 0;
}

/* 

The method which used for setting/assign the values of variable inside the
class is also known as 'accessor'
The method which used for getting/retrive the values of variable inside the
class is also known as 'mutator' 

*/

