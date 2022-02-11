#include<iostream>
using namespace std;

int main(){
    int a,b,result;
    cout<<"****************Bitwise And operator calculator***********"<<endl;
    cout<<"Please enter two numbers: ";
    cin>>a>>b;
    result = a | b;
    cout<<"Bitwise OR :"<<result<<endl;
    result = a & b;
    cout<<"Bitwise AND :"<<result;
}