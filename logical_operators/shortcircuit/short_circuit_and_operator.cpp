#include<iostream>
using namespace std;
int main(){
    // example of short circuit evaluation
    int a,b,i;
    a = 10;
    b = 5;
    i = 5;
    if(a < b && ++i <= b){
       cout<<i<<endl;
    }
    cout<<i<<endl;
    return 0;

}