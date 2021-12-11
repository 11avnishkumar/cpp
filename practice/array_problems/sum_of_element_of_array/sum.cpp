#include<iostream>
using namespace std;
int main(){
    int a[5] = {4,5,6,7,9},sum=0;
    for(int i=0;i<5;i++)
       sum = sum + a[i];
    cout<<sum<<endl;   
    return 0;
}