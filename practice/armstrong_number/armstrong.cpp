#include<iostream>
using namespace std;
int main(){
    int n,r,m,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    m = n;
    while(n>0){
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }
    if(m==sum)
    cout<<"It's a armstrong number";
    else
    cout<<"It's not a armstrong number"; 
}
// what is armstrong number
// when the sum of cube of a given numbr is equal to given number
// for example
// n = 153
// 