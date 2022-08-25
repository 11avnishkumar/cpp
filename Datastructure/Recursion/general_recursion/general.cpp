#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
    }
}
int main(){
    int x = 3;
    fun(x);
    return 0;
}
/* 
Output:
3
2
1
if 'endl' is not used then it will be
3 2 1


*/
