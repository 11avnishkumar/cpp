#include<iostream>
using namespace std;

class Demo{
    int *p;
    public:
    Demo(){
        p=new int[10];
        cout<<"Constructor is called"<<endl;
    }
    ~Demo(){
        delete []p;
        cout<<"Destructor is called"<<endl;
    }
};
void fun(){
    // Demo d;
    Demo *ptr = new Demo(); // Memory allocated in heap area 
    delete ptr; // To call the destructor we must call the 'delete ptr'
}

int main(){
    fun();
    return 0;
}

// We must delete the heap area memory explicitly otherwise it will not be deleted