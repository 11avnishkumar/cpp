#include<iostream>
using namespace std;
int main(){
    int A[6]{2,5,6,8,9,4};
    int *p = A; // here we don't need address operator when we assign array to pointer
    cout<<*p<<endl; //output will be  2
    cout<<&p<<endl; // output is address of the pointer itself.
    p++; // move one location forward
    cout<<*p<<endl; // output will be 5
    p--; // Move one location back
    cout<<*p<<endl; //Again value will be 2
    cout<<p<<endl; // This will give address of value 2
    cout<<p+2<<endl; // this will give address of value 6
    cout<<*(p+2)<<endl; // This will give value 6 in array
    // print all the values in the given array

    cout<<"**********Print all values in array***************"<<endl;
    for(int i = 0; i<6; i++){
        cout<<A[i]<<endl;
    }

    cout<<"***********Print all values in array**************"<<endl;
    for(int i = 0; i<6; i++){
        cout<<i[A]<<endl;
    }

    cout<<"**************Address of all the elements******************"<<endl;
    for(int i = 0; i<6; i++){
        cout<<A+i<<endl;
    }

    cout<<"**************Address of all the elements******************"<<endl;
    for(int i = 0; i<6; i++){
        cout<<p+i<<endl;
    }

    cout<<"**************Print of all the elements******************"<<endl;
    for(int i = 0; i<6; i++){
        cout<<*(p+i)<<endl;
    }
    /*

    There are only five operation possible in pointer arithmetic
    and these are as follows.
    
    P++ => Move to next location.
    P-- => Move to previous location.
    P = P + 2 => Move two step forward location.
    P = P - 2 => Move two step backward location.
    d = p - q => Distance between two pointers.
    
    */
}