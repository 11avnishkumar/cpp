#include<iostream>
using namespace std;
int g = 20; //This is global variable and it can be accessed any where in the program
// program to demonstrate the global variables.
void fun(){
  int a = 10;
  int g = 10; // function level scope
  a++;
  g++;
  {
    int g = 0;
    g++;
    cout<<g<<endl;
  }
  cout<<a<<endl;
  cout<<g<<endl;
}
int main(){
  //cout<<a<<endl; // The variable a can not accessed here it will
  //it will throw error because it is declared inside the fun() function
  //and it can be accessed inside the fun() function only.
  g++;
  cout<<g<<endl;
  fun();
  cout<<g<<endl;
}

// Local variable always given priority.
// A function always search for nearest scope of a variable. 
