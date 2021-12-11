#include<iostream>
using namespace std;
int main(){
    int a[10] = {4,5,9,8,7,4,6,8};
    float b[10] = {4.5f,3.5f,0.25f,5.6f,4.35f};
    char c[3] = {'x','p','q'};
    for(int x:b)
     cout<<x<<endl;
    return 0;
}