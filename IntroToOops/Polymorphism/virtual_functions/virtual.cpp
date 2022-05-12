#include<iostream>
using namespace std;
// Program to demonstrate the concept of virtual keyword in cpp
class Base{
    public:
    virtual void display(){
        cout<<"Display of Base"<<endl;
    }

};

class Derived:public Base{
 public:
    void display(){
        cout<<"Display of Derived"<<endl;
    }
    
};

int main(){
    
Derived d;
Base *ptr = &d;
ptr->display();

return 0;
}

