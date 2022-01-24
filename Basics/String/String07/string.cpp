#include<iostream>
using namespace std;
int main(){
// Reading string using getline() method
char s[100];
cout<<"Enter your name: ";
cin.getline(s,100);
cout<<"Welcome: "<<s<<endl;
return 0;

}