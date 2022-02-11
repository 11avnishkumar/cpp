#include<iostream>
using namespace std;
int main(){
  // Write the program to check whether the uppercase,lowercase,numeric_digit
  char userInput;
  cout<<"Enter the Character: "<<endl;
  cin>>userInput;
  if (userInput == 'a')
      cout<<"It is lower";
  else if(userInput == 'A')
      cout<<"It is Capital";
  else
      cout<<"It is digit";        

  return 0;
}