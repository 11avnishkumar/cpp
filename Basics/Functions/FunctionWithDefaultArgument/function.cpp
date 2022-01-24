#include<iostream>
using namespace std;
int add(int x, int y=0, int z=0){
  return x + y + z;
}
int main(){
  // Program to show the concept of default argument.
  cout<<add(10)<<endl;
  cout<<add(10,5)<<endl;
  cout<<add(10,5,4)<<endl;


}
// Point to note that whenever we define function with default parameters
// we must do that from the right side only it is manadatory.