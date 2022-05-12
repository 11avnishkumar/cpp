#include<iostream>
using namespace std;
// Program to demonstrate the concept of virtual keyword in cpp
class BasicCar{
    public:
    virtual void start(){
        cout<<"Basic car started"<<endl;
    }

};

class AdvanceCar:public BasicCar{
 public:
    void start(){
        cout<<"Advance car started"<<endl;
    }
    
};

int main(){
    
BasicCar *ptr = new AdvanceCar();
ptr->start();

return 0;
}
// To achive run time polymorphism we need three things:
// virtual function
// overriding method
// base class pointer and derived class object
