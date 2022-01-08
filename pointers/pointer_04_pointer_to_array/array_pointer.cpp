#include<iostream>
using namespace std;
int main(){
    // Pointer to array
    int a[]{4,5,6,7,8,9}; //This is valid decralaration and initialization of
    // array in c++
    int *p;
    p = &a;
    cout<<p<<endl;

    return 0;
}