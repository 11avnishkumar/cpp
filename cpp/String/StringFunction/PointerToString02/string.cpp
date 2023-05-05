#include<iostream>
#include<cstring>
using namespace std;
int main(){
  // Ponter to a string using headerfile.
  char *s; //The output will be 11,not space is also couted as a character
  cout<<"Enter the String:";
  cin>>s;

  cout<<"The length:"<<strlen(s)<<endl;
  return 0;
}
// The program is not able to read multiple words.