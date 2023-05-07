#include<iostream>
using namespace std;
template <class T>
T maximum(T x,T y){
  return x+y;
}

int main(){
  // Program to show the concept of function template.
 
  cout<<maximum(10,5)<<endl;
  cout<<maximum(10.5f,3.2f)<<endl;
  cout<<maximum(10.5,3.2)<<endl; // This double not float
  return 0;

}

/* 

A function templating possible ony for those function which are
overlaoded.

Note: while dealing with function template both the argument given
in function call must be same.
cout<<max(10.5f,3)<<endl; // this will throw error as one argument 
of type float and the other is of type integer, and we have not defined such function above where the function have two different data
type arguments.

 */