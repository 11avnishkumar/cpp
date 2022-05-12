#include<iostream>
using namespace std;

class Base{
public:
    void fun1(){
        cout<<"fun1 of Base"<<endl;
    }
};

class Derived:public Base{
public:
    void fun2(){
        cout<<"fun2 of Derived"<<endl;
    }
};

int main() {
    // creating object
    Derived d;
    Base *ptr = &d;
    ptr->fun1(); // we can access this function
    // ptr->fun2(); // but we can not access as it is not available in base class this will give the error

    //************ vice versa is not possible

    // Base d;
    // Derived *ptr = &d;
    // ptr->fun1(); // we can access this function
    // ptr->fun2(); // but we can not access as it is not available in base class this will give the error


    return 0;
}
