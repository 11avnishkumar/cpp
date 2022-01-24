// program to find the given character in  given string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char s1[20] = "Programming";
  if(strchr(s1,'g') != NULL)
    cout<<strchr(s1,'k');
  else
    cout<<"The character is not found";
  return 0;
}
// The working of strchr() function is similar to substr() function.
// strchr() find the first occurence of the given charcter and if it is found in the given string then
// it print from the first occurence of the character to the end of the string.
// Note: if the given character is not found it will through and error,so to avoid that error we
// need to use condition.
// strchr() is case sensitve function