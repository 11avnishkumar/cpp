#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n<<endl;
    }
}
int main(){
    int x = 3;
    fun(x);
    return 0;
}
/* 
Output:
1
2
3
if 'endl' is not used then it will be
1 2 3


*/