#include<iostream>
using namespace std;
int main(){
  // Write a program to find whether the given number is prime or not
  int userInput,i=2;
  cout<<"Enter the number: ";
  cin>>userInput;
  while(i<userInput){
    if (i % 2 != 0) {
        cout<<"Number is prime: "<<i<<endl;
    }else{
      cout<<"Number is not prime: "<<i<<endl;
    }
    i++;
  }      

}