#include<iostream>
using namespace std;
class Complex{
  
  private:

  int real;
  int img;

  public:
  // Constructor
  Complex(int a=0,int b=0){
    real = a;
    img = b;
  }

  Complex add(Complex c){
    Complex temp;
    temp.real = real+c.real;
    temp.img = img+c.img;
    return temp;

  }

};
int main(){
  // Program to demonstrate the operator overloading.
  Complex c1(5,6);
  Complex c2(8,7);
  Complex c3;

  return 0;
}