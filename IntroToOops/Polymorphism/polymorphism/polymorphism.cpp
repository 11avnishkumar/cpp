#include<iostream>
using namespace std;
// base class or parent class or superclass
class Car{
public:
    virtual void start(){cout<<"Car Started";}
};

// Innova car is inherited from the Car class publically

class Innova:public Car{
public:
    void start(){cout<<"Innova Started"<<endl;}
};


// Swift car is also inherited from the Car
class Swift:public Car{
public:
   void start(){cout<<"Swift Started"<<endl;}
};

int main()
{
    Car *ptr = new Innova(); 
    // here the pointer is of base class and object assigned to it is of Innova,therefore the output will be of base class not innova class,if we want to invoke innova class then we must put virtual in front of the base class method.

    ptr->start();

    ptr = new Swift(); 
    // here swift class object has been assigned to base class pointer.

    ptr->start();

    return 0;
}