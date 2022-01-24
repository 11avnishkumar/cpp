#include<iostream>
#include<cstring>
using namespace std;
int main(){
  // Program find the substring
  char s1[20] = "Programming";
  char s2[10] = "lram";
  if(strstr(s1,s2) != NULL)
    cout<<strstr(s1,s2)<<endl;
  else
    cout<<"Sorry the string is not found!!!!";
  
  return 0;
}
// The above program will find the given string in existing string if it is found then it will print.
// From the first occurence of the characters to the end of the string.
// and if the string is not found then it will through a runtime error.
// To prevent this runtime error we need to use if else conditon.