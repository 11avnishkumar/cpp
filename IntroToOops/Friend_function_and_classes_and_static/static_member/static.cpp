#include<iostream>
using namespace std;
// Program to demonstrate the concept of Static member in c++.
class Test{
public:
    int a;
    static int count; // Declaration of static variable
    Test() // This is non parametrized constructor
    {
        a=10;
        count++;
    }
    static int getCount(){
        //a++; // give error because static method can only access static memebers
        return count;
    }
};

int Test::count=0; // initialization of static variable with scope resolution operator
int main()
{
    Test t1,t2;
    // cout<<t1.count<<endl;
    // cout<<t2.count<<endl;
    // t1.count = 25;
    // cout<<t2.count<<endl;
    //cout<<Test::count<<endl; // static member accessed using class name and scope resolution operator 
    cout<<t1.getCount()<<endl; //using instance of the class
    cout<<Test::getCount()<<endl; // using class Name and scope resolution operator

    /* code */
    return 0;
}

// Note:
/*
Static members use shared memeory


*/