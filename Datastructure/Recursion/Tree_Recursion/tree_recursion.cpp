#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<" "<<n;
        fun(n-1);
        fun(n-1);

    }
}
int main(){
    int result;
    fun(3);
    return 0;
}
/* 
Output of the program
3 2 1 1 2 1 1

*/