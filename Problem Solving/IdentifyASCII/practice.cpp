#include<iostream>
using namespace std;
int main(){
  int a,b;
  // cin>>a>>b;
  a = cin.get();
  
  cout<<a<<endl;
  return 0;
}
// cin never read space,tab,enter character

// get() function reads the character also.
// So if the any number given to it as integer it will treat them as ASCII characters

// For example it will treat 
// It will treat  1 as charcter '1' which is 49 in decimal.
// Enter/carriage return = 10
// Space = 32
// Tab = 9
