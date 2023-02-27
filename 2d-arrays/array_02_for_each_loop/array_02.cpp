#include<iostream>
using namespace std;
int main(){

    int a[2][3] = {4,5,6,5,9,6};

    //acccessing 2d arrays with for each loop
    for(auto& x:a){
        for(auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
  return 0;  
}