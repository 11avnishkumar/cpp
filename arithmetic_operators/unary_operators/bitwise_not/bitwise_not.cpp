#include<iostream>
using namespace std;

int main(){
    int first_number,result;
    cout<<"****************Bitwise calculator***********"<<endl;
    cout<<"Please enter two numbers: ";
    cin>>first_number;
    result = ~(first_number);
    cout<<"Your result is:"<<result;
}