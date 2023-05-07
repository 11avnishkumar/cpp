#include<iostream>
using namespace std;
int main(){
    float b[10] = {4.5f,3.5f,0.25f,5.6f,4.35f};
    for(float x:b)
      cout<<x<<endl; //This program will print values with float values
    cout<<"truncating decimal values:"<<endl;
    for(int x:b)
       cout<<x<<endl; //This program will print only integer values and will truncate decimal parts
    return 0;
}
//