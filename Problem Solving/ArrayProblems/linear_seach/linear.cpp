#include<iostream>
using namespace std;
int main(){
    int a[10],n=10,key;
    cout<<"Entet the 10 element:"<<endl;
    for(int i=0;i<n;i++)
       cin>>a[i]; //store all the elments in the array
    cout<<"Emter the key:";
    cin>>key;
    for(int i=0;i<n;i++)
       if(key==a[i]){
        cout<<"Key found at:"<<i<<endl;
        return 0;
       } 
    cout<<"No element found:";    
    return 0;
}