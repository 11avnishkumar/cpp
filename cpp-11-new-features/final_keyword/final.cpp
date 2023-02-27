#include<iostream>
using namespace std;
class Parent final {
  virtual void show() final{
    // Now the void function can not be overided in the child class, if we do
    // so we get an error.
  }
};

class Child:Parent{
 void show(){
    // here we have overided a function although,it is not possible because the parent class function marked as final 
 }
};

int main(){

    return 0;
}


/*
-The first use of final keyword is to restrict the inheritance procedure
-The second of use of final keyword is to restrict the overriding of function
*/