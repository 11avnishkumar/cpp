#include<iostream>
using namespace std;
int main(){
  // Write a program to find the sum of all even numbers
  int sum=0,userInput,i=0;
  cout<<"Enter the number: ";
  cin>>userInput;
  while(i<=userInput){
     if (i % 2 == 0)
        sum = sum + i;
        i++;
  }      
  cout<<"The sum is: "<<sum<<endl;      

}