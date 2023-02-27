#include<iostream>
using namespace std;
int main(){
  // Program demonstrating the use of ASCII character
  char s[10] = {65,66,67,68,69,0,70};
  cout<<s<<endl;
  return 0;
}
// The output of the above program will 'be ABCDE' it will not print
// character after that because 0 indicates the null character
// either we can put 0 or null charcter.