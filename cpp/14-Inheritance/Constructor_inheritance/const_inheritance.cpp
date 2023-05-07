#include<iostream>
using namespace std;
class Base{

  public:

  Base(){cout<<"Non-param Base"<<endl;}
  Base(int x){cout<<"Param of Base "<<x<<endl;}
};

class Derived:public Base{
  public:
  Derived(){cout<<"Non-param Derived"<<endl;}
  Derived(int y){cout<<"Param of Derived "<<y<<endl;}
  Derived(int x,int y):Base(x){cout<<"Param of Derived "<<y<<endl;}
};

int main(){
// write a program to show how constructor is called while using the inheritance

//Derived d; // only Non-param Base class is called and Non-param Derived class is called


Derived d(10); // only Non-param of Base class is called and Param of Base class is called.But what about param of base class how it will be called
// The answer is we need to pass Base class constructor to Derived class constructor


  
}
// Calling of constructor is different then executing a constructor
