#include<iostream>
using namespace std;
    void fun(const int &a,int &b)
    {
        cout<<a<<b<<endl;
        //a++; now this value will not modifable because the "a is constant"
    }

int main(){
 int x = 10;
 int y = 20;
 fun(x,y);
 cout<<"Main "<<x<<" "<<y<<endl;
}