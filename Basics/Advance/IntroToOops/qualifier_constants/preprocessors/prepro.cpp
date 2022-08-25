#include<iostream>
using namespace std;
// macros
#define max(x,y) (x > y ? x : y ) // if we don't put the parenthesis then it will throw an error
#define msg(x) #x // The pound or # symbol means string

#define PI 3.1425
#ifndef PI
    #define PI 3
#endif    
int main(){
    cout<<PI<<endl;
    cout<<max(10,12)<<endl;
    cout<<msg(HEllO)<<endl;
    return 0;
}

// The PI will not occupy any variable because it is not a variable at all
