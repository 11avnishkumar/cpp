#include<iostream>
using namespace std;
int main(){
    // creating and initialzing a 2D arrays

    int a[2][3] = {{4,5,6},{5,9,6}}; //this is first way of initializing arary
    int b[2][3] = {4,5,6,5,8}; //here we have not provided all the values they will be filled with zeros

    //to print all the values of two dimensional array we need
    //two for loop
    //one loop for rows
    //one loop for cols
    //here i is used for rows
    // and j is used for cols
    for(int i = 0; i<2;i++){
        for(int j=0;j<3;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl; //print new line after every row
    }
    // Second array
    cout<<"######################################"<<endl;
    for(int i = 0; i<2;i++){
        for(int j=0;j<3;j++){
           cout<<b[i][j]<<" ";
        }
        cout<<endl; //print new line after every row
    }
    
}