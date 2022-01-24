#include<iostream>
using namespace std;
void displayHello(){
  cout<<"hello world"<<endl;
}
int main(){
  // Write a program to show the basic concept of function
  displayHello();
}

// Points to rememeber
// Generally it is not good to write cin/cout in function that should
// be a part of main function only.
// The job of each function is to do the task and return it to the main function.
