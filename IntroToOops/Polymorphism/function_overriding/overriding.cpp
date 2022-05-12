#include<iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"display of Base"<<endl;
    }

};

class Derived:public Base{
 public:
    void display(){
        cout<<"diplay of Derived"<<endl;
    }
    // here we have overided the method of base class
};

int main(){
    
Derived d;
d.display();
// Note prototype must be same as while overriding the method otherwise it will be considered as a
// overloading not overiding
return 0;
}