#include<iostream>
using namespace std;

template<typename T>
    void fun(T p){
        p();
}

int main()
{
    [](){cout<<"Hello"<<endl;} ();
    auto f = [](){cout<<"Hello"<<endl;}; // here we have stored the function in an another variable known as f
    f();

    // parameter
    [](int x,int y){cout<<"Sum: "<<x+y<<endl;}(10,5);

    // Lamda function inside cout
    cout<<[](int x,int y){return x + y;}(10,5)<<endl;

    // parameter with return 
    int x = [](int x,int y){return x+y;}(10,5);
    cout<<"The Sum is: "<<x<<endl;

    int s=[](int x,int y)-> int{return x+y;}(20,5);
    cout<<"Sum is: "<<s<<endl;

    // Accessing z inside the function
    int z = 10;
    auto k = [z](){cout<<z<<endl;};
    k();
    

    // Passing lamda as function arguements
    
    int c = 10;
    auto g=[&c](){cout<<c<<endl;};
    fun(g);

    return 0;
}

/*
Syntax of un-named function or lamda expression:
[capture_list](parameter_list)->return type{ body }

*/