/* 

Program to demonstrate the Recursive function.

A functions that can call itself is known as recursive functions.

*/
#include<iostream>
using namespace std;

int sum(int X[],int n){
    if(n>0)
        return sum(X, X[n-1]) + X[n];
    return 0;
}

int main(){
int A[5] = {1,2,3,4,5};
cout<<sum(A,5)<<endl;
return 0;
}