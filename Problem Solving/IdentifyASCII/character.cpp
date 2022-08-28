// Write the program to check whether the uppercase,lowercase,numeric_digit
#include<iostream>
using namespace std;
int main(){
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

/*  *************** Explanation ************** */
/*
The Above program work on the ASCII characters
Step - 1:
    Take the input from the user.
Step - 2:
    
Step - 3:
Step - 4:


*/


/* ASCII Code */

/*

1. Uppercase Alphabet
    A  - Z
    65 - 90

2. Lowercase Alphabet
    a  - z
    98 - 122

*/
