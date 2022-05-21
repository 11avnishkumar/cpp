#include<iostream>
using namespace std;

class Stack{
// Private method 
private:
    int *ptr;
    int top;
    int size;
public:
    Stack(int sz){ // constructor
        size = sz;
        top = -1; // top pointer 
        ptr = new int[size]; // allocate the memory 
    }

    void push(int x); //push 
    int pop(); // pop

}; // end of class

// Push method
void Stack::push(int x){
    if(top == size - 1)
        cout<<"Stack is full or overflow"<<endl;
    else{
        top++;
        ptr[top] = x;
    }
}


// Pop method
int Stack::pop(){
    int x = 0;
    if(top == -1)
        cout<<"Stack is empty"<<endl;
    else{
        x = ptr[top];
        top--;
    }
   return x; 
}

// Main method
int main()
{
    Stack s(10);
    s.push(10);
    s.push(23);
    s.push(33);
    /* code */
    return 0;
}