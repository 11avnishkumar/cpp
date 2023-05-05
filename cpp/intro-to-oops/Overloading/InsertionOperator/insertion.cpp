  // Insertion operator overloading 
  // *********** INSERTION OPERATOR OVERLOADING **************
#include<iostream>
using namespace std;

class Complex{
  
  private:

  int real;
  int img;


  public:
  // operator overloading
  Complex(int r=0,int i=0){
    real = r;
    img = i;
  }
  
  
  
  // friend function
  friend ostream & operator<<(ostream &out,Complex &c3); 

};

ostream & operator<<(ostream &out,Complex &c){
  out<<c.real<<"+i"<<c.img;
  return out;
}

int main(){

  Complex c(10,5);
  cout<<c;

  return 0;
}

// Instead of returnig 'ostream &' we can user 'void' the problem
// will occur when we start return void and that is we can not use the '<<' operator further as it will give the error
