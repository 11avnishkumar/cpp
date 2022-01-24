#include<iostream>
#include<cstring>
using namespace std;
int main(){
  // Program to copy string,to copy string we need destination and source.
  char s1[20] = "Good";
  char s2[10] = "";
  strncpy(s2,s1,2);
  cout<<s2<<endl;
  
  return 0;
}