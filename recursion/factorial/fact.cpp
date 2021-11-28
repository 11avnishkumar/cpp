#include<iostream>
using namespace std;
int factorial(int n);
int factorial(int n){
 return n * factorial(n-1);
}

int main(){
cout<<factorial(10)<<endl;
cout<<"hello"<<endl;
return 0;
}