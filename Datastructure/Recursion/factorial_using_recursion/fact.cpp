#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

// factorial using for loop
int factorial(int n){
    int f=1;
    int i;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}

int main(){
    int r;
    r = fact(5);
    cout<<factorial(5)<<endl;
    cout<<r<<endl;
    return 0;
}
// output 120

// System has also built in stack if the fact() will go into
// an infinite loop then at some point when the stack is overflow 
// then it will stop 