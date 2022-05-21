#include<iostream>
using namespace std;
// Program to demonstrate the virtual destructor 
class Base{
    public:
    virtual ~Base(){
        cout<<"Destructor of Base"<<endl;
    }
};
class Derived:public Base{
    public:
    ~Derived(){
        cout<<"Destructor of Derived"<<endl;
    }
};
void fun(){
    Derived d;
    Base *p = new Derived();
}

int main(){
    fun();
    return 0;
}