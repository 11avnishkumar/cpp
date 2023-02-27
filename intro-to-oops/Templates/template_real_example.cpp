#include<iostream>
using namespace std;

template<class T>
class Stack{

private:
    T *ptr;
    int top;
    int size;
public:
    Stack(int sz){ // constructor
        size = sz;
        top = -1; // top pointer 
        ptr = new T[size];
    }

    void push(T x); //push 
    T pop(); // pop

}; // end of class

template<class T>
void Stack<T>::push(T x){
    if(top==size-1)
        cout<<"Stack is full or overflow"<<endl;
    else{
        top++;
        ptr[top]=x;
    }
}

template<class T>
T Stack<T>::pop(){
    T x = 0;
    if(top==-1)
        cout<<"Stack is empty"<<endl;
    else{
        x=ptr[top];
        top--;
    }
   return x; 
}

// Main method
int main()
{
    Stack<int> s(10);
    s.push(10);
    s.push(23);
    s.push(33);
    /* code */
    return 0;
}