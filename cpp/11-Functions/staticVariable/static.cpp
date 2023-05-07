// Demonstration of static variable
#include<iostream>
using namespace::std;
void fun()
{
    static int s=10;
    s++;
    cout<<s<<endl;

}
int main(){
    fun(); // 11
    fun(); // 12
    fun(); // 13
}