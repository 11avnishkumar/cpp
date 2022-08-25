#include<iostream>
using namespace std;
class Rectangle{
  
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

// Cuboid class
 class Cuboid:public Rectangle{
   private: 
   int height;
   public:
   Cuboid(int h){
     height = h;
   }

  //  acessor method for cuboid class
  int getHeight(){return height;}
  void setHeight(int h){height=h;}
  //int volume(){return length * breadth * height} Here we can not access the variable 'length','breadth', because these are private
  // Memebers of the Base class, and the private memembers of base class cannot be accessed directly into the child class,if we do so we will get
  // error so we have another option and that is to access the method getLength() and getBreadth which is inside the base class but under the 'public' access
  // specifier that is why it can be accessed inside the child class.
  int volume(){return getLength() * getBreadth() * height;}

 };



int main(){
  Cuboid c(5);
  c.setLength(10);
  c.setBreadth(5);
  cout<<"The volume of cuboid is: "<<c.volume()<<endl;

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