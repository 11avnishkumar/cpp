#include<iostream>
using namespace std;
int main(){
  char s[100];
  char s2[100];
  cout<<"Enter your name: ";
  cin.get(s,100);

  cout<<"Welcome:"<<s<<endl;
  cin.ignore();
  // The above program give output as expected,but the below program is not give what is expected.
  // because as soon as get() method encountered and return/enter character it will stop reading input from the console.
  // to avoid such a problem we use cin.ignore() method.
  cout<<"Enter your name: ";
  cin.get(s2,100);
  
  cout<<"Welcome:"<<s2<<endl;
  return 0;
}