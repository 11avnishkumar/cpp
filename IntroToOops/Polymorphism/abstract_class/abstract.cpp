#include<iostream>
using namespace std;
// base class or parent class or superclass
class Car{
public:
    virtual void start()=0; //Pure virtual function/method
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
    // Car b; // Since Car is an abstract class be can not create object/instance of that class
    Car *ptr = new Innova(); 
    ptr->start();

    ptr = new Swift(); // here swift class object has been assigned to base class pointer.
    ptr->start();

    return 0;
}

//Notes:

// Since we made Car class an abstract class.Now it is mandatory for the child/Derived class to override the method of the car class otherwise the Derived/child class also become abstract class and we know that we can not create the object of the abstract class.