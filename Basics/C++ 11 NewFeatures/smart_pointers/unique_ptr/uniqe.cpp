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
    unique_ptr<rectangle> ptr(new rectangle(10,5));
    cout<<ptr->area()<<endl;
    unique_ptr<rectangle> ptr2;
    ptr2=move(ptr); // removing ptr and assining it to ptr2
    cout<<ptr2->area();
    cout<<ptr->area();   
}

/*
- In unique_ptr case only one pointer per object is allowed.
- Multiple pointer for one object is not allowed.
- if we try to do so it will throw an error.
*/