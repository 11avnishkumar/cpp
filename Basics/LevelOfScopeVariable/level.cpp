#include<iostream>
using namespace std;
int x = 40;
int main(){
  //Program to demonstrate the level of scope of a variable.
  int x = 30;
  {
    int x = 20;
    cout<<x<<endl;
  }
  cout<<x<<endl;
  cout<<::x<<endl; // :: double colon means scope resolution operator

}

// In c++ variables have block level scope.