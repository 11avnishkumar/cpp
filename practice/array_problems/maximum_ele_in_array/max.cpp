#include<iostream>
using namespace std;
int main(){
    // Progaram to find maximum number from the array
    int a[10],n=10,max;
    cout<<"Enter 10 elements:"<<endl;
    for(int i=0;i<n;i++)
       cin>>a[i];
    max = a[0];
    for(int i=0;i<n;i++)
        if(a[i]>max)
          max = a[i];
    cout<<"The maximum element is:"<<max<<endl;        
    return 0;
}
