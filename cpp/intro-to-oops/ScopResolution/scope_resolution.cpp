#include<iostream>
using namespace std;
class Rectangle{
  // This is a complete class
  private:
  // Data hiding
  int length;
  int breadth;

  public:
   Rectangle(); /* Non-parameterized constructor */
   Rectangle(int l,int b); /* parameterized constructor */
   Rectangle(Rectangle &rect); /* copy constructor */

   /* Accessor method */

   int getLength(){return length;} // get length is simple method so we defined it here,not outside the class
   int getBreadth(){return breadth;} // get breadth is simple method so we defined it here,not outside the class

  /* Mutator method */

   void setLength(int l);
   void setBreadth(int b);

  /* Facilitator method */

  int area();
  int perimeter();

  /* Enquiry function or inspector method */
  
  bool isSquare();

  /* Destructor */

  ~Rectangle();

};

int main(){
  // Program to demonstrate different type of function available in a class
  Rectangle r1(10,10);
  cout<<"Area: "<<r1.area()<<endl;
  if(r1.isSquare())
     cout<<"This is square"<<endl;
  else
     cout<<"This is not square"<<endl;   

  return 0;
}
// Scope resolution example
// Non-parameterized constructor
Rectangle::Rectangle(){
  length = 1;
  breadth = 1;
}

// Parameterized constructor
Rectangle::Rectangle(int l,int b){
  length = l;
  breadth = b;
}

// Copy constructor
Rectangle::Rectangle(Rectangle &rect){
  length = rect.length;
  breadth = rect.breadth;
}

// Set length
void Rectangle::setLength(int l){
  if(l>=0){
  length = l;
  }else{
    length = 0;
  }
}
void Rectangle::setBreadth(int b){
  if(b>=0){
  breadth = b;
  }else{
  breadth = 0;
  }
}
// Area method
int Rectangle::area(){
  return length * breadth;
}

// Perimeter method
int Rectangle::perimeter(){
  return 2*(length * breadth);
}

// Inspector method
bool Rectangle::isSquare(){
  return length == breadth;
}

// Destructor 
Rectangle::~Rectangle(){
  cout<<"Rectangle Destroyed";
}