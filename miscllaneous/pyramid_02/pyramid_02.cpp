#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the number of rows of pyramid you want to print?:";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}    