#include<iostream>
using namespace std;
class Rectangle{

  private:

  int length; 
  int breadth;

  public:
  /*__________creating our own constructor/ user-defined-constructor_________ */
  
  //Rectangle(){
    // Note:A constructor must not have any return type i.e a constructor never returns a value
    // A constructor must have same name as class name it is manadatory in c++
    //length=1;
    //breadth=1;
    // One more thing to be note that when the user-defined-constructor will be present
    // then the default constructor will be ignored by the compiler that means
    // Default constructor will not be invoked rather the user-defined-constructor will be invoked
    //
  //}


  /* _______________Parameterized constructor_______________*/
  Rectangle(int l=1,int b=1){
  // In parameter constructor it is a chance that user may or may not provide negative value
  // so we will call the our own method tht is setLength() and setBreadth() to set the value of length
  // and breadth.
  setLength(l);
  setBreadth(b);
  }


  /* __________________________Copy constructor_______________ */
  Rectangle(Rectangle &rect){
   length = rect.length;
   breadth = rect.breadth; 
  }


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
// Rectangle r1; // object for default constructor
//Rectangle r1(10,5); // when we have parameterized constructor we need to pass the argument/parameters
// like this 'Rectanlge r1(arg1,arg2..)'
Rectangle r1;  // this will work for constructor without any parameter that is default
Rectangle r2(r1); // here we have passed the object r1
// cout<<"Area: "<<r1.area()<<endl;
// If we call the area() method we will get an value : 0
// The value 0 is set by the default constructor provided by the compiler

// After providing user-defined-constructor and having set the values of length and bredth to 1;
// Now if we call the area() method we will get length*bredth = 1*1 = 1

cout<<"Area: "<<r1.area()<<endl;

return 0;
}

/* 
We can also pass the default argument to the parameterized construtor so 
that we don't need the non-parameterized constructor because these works for 
both,if the user will pass the argument then the constructor also works,and if he/she
opt to not provide the any argument in this case the default argument provided to the
constructor will works and still the same constructor will be called/invoked.

// therfore we can comment out the default constructor/user-defined-constructor
// which we have created.


*/

