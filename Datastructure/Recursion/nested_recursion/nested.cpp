// Program to show the concept of nested recursion
#include<iostream>
using namespace std;
int fun(int n){
    if(n>100)
        return n - 10;
    else
        return fun(fun(n+11));    
}
int main(){
    cout<<fun(95)<<endl;
    return 0;
}
// output 91
/* 

if we pass values less then or equal to 101 the result will always be 91
 */