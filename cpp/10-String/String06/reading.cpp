#include<iostream>
using namespace std;
int main(){
  // Program to demonstrate reading string from the console.
  char s[20];
  cout<<"Enter the Name: ";
  // cin>>s; // it will read character till the first occurance of space.
  // cout<<s<<endl;
  cin.get(s,20); //we have given the s variable and the size, if the size is more than 20
  // it will only take up to 0 - 19 characters only.
  // The advantage of using get() method is that it will provide the full string whatever entered by the user
  // on the console.
  // It will only truncate the character when it will ran out of the size provided to it.
  cout<<s<<endl; // the output
  return 0;
}
