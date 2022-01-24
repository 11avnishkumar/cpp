#include<iostream>
using namespace std;
int multiplication(int x , int y){
  return x * y;
}
int main(){
  // function with parameters
  int a,b,result;
  cout<<"Enter Two number: ";
  cin>>a>>b;
 result = multiplication(a,b);
 cout<<"The result:"<<result<<endl;
}
