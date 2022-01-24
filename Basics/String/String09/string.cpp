#include<iostream>
using namespace std;
int main(){
  char s[100];
  char s2[100];
  cout<<"Enter your name: ";
  cin.getline(s,100);

  cout<<"Welcome:"<<s<<endl;

  cout<<"Enter your name: ";
  cin.getline(s2,100);
  
  cout<<"Welcome:"<<s2<<endl;
  return 0;
}