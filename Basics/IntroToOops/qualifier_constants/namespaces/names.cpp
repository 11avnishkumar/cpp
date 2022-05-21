#include<iostream>
using namespace std;
namespace First{
void fun(){
    cout<<"First "<<endl;
}
};

namespace Second{

void fun(){
    cout<<"Second "<<endl;
}
};
using namespace First; // now fun method of first namespace become default
int main(){
    fun();
    Second::fun();
    return 0;
}

/* 
Namespace is used to prevent naming confliction 
Note:
-we must not use "using namespace" use scope resolution operator :: 
*/