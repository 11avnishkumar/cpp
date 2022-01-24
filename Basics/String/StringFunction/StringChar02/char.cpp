// program to find the given character in  given string.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char s1[20] = "Programming";
  if(strrchr(s1,'r') != NULL)
    cout<<strrchr(s1,'r');
  else
    cout<<"The character is not found";
  return 0;
}
// The strrchr() works the same way as strchr() except that it find the given character occurence from the
// right side.