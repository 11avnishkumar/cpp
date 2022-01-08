#include<iostream>
using namespace std;
int main(){

    int a[2][3];

    //**************acccessing 2d arrays with for each loop************
    //*************for reading the array input/values from the user******
    cout<<"Please enter the values in the array:"<<endl;
    for(auto& x:a){
        for(auto& y:x){
            cin>>y; //reading the values
        }
        cout<<endl;
    }
    //*************for printing the values of 2d arrays******************
    for(auto& x:a){
        for(auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
  return 0;  
}