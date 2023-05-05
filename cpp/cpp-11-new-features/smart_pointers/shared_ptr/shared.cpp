#include<iostream>
#include<memory>
using namespace std;   
/* program for using unique pointer */
class rectangle
{
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    }
};
int main()
{
    shared_ptr<rectangle> ptr(new rectangle(10,5));
    cout<<ptr->area()<<endl;

    shared_ptr<rectangle> ptr2;

    ptr2 = ptr; // ptr assigned to ptr2
    cout<<"ptr_2 "<<ptr2->area()<<endl;
    cout<<"ptr_1 "<<ptr->area()<<endl;  
    cout<<ptr.use_count()<<endl; // tell us how many pointers are pointing two one objects 
}

/*
- In shared_ptr case multiple pointer are allowed to point one object.
- using 'use_count()' method programmer can see how many pointer are pointing to one object.
*/