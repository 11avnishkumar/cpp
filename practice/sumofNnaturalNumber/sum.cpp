#include<iostream>
using namespace std;
int main(){
    int n;
    int result;
    cout<<"********Sum of first N natural numbers***********"<<endl;
    cout<<"Enter the number to which you want to print the sum:";
    cin>>n;
    result = n * (n + 1) / 2;
    cout<<"The result is: "<<result<<endl;


}