#include<iostream>
#include<cstring>
using namespace std;
int main(){
  // Concatinate two string.
  // For concatinating string we need  destination and source.
  char s1[20] = "Good";
  char s2[10] = "Morning";
  strcat(s1,s2);
  cout<<s1<<endl;
  strncat(s1,s2,3); // In this function we can also mention the length up to which we want to copy the string.
  cout<<s1<<endl;
  return 0;
}
// The output of the above program will be 'GoodMorning'.
// The output of the second function will be 'GoodMorningMor'
// Explanation
// In second function which is strncat() used it will take the first string
// and concatinate the second string up to only 3 characters.