#include<iostream>
using namespace std;
int main(){
    int a[2][3] = {7,1,3,6,9,4};
    int b[2][3] = {4,5,6,5,4,8};
    int c[2][3];
    // for adding matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
            // cout<<c[i][j]<<" ";
            // we can use a single loop for adding and printing the matrix
            // but for readablilty purpose we have use two loop
        }
        // cout<<endl;
    }
    //for printing two matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            // c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}