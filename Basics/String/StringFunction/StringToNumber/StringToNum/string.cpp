#include<iostream>
#include<cstring>
using namespace std;
int main(){
  // Program to convert string into number that is ASCII code
  char s1[20] = "235";
  char s2[20] = "54.78";
  long int x=strtol(s1,NULL,10);
  float y=strtof(s2,NULL);
  cout<<x<<endl<<y<<endl;
  cout<<x+10<<endl<<y-5<<endl;
  return 0;
}

/* 
// Explanation and Description of the program

Here we have function strtol(), which is string to long integer.
the second function we have is strtof(), which is string to float.
Note: Both the function need three argument in order that is (string,NULL,base/radix)
The null argument indicates the end of the string
The base/radix depend on the number we have use
if the base is octal then we need to pass the 8
if base is decimal then 10
if base is hexadecimal then 16
and so on.... 

*/
