 /*
 what is a pointer?
 A pointer is a variable that is used to store the address of another variable
 There is two type of variable

1 . Data variable
2 . Address variable

*/

//Example of the pointer
//Declaration

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p; //pointer Declaration or pointer of type integer
    p = &x; //initialization of pointer

    // Printing all the values
    cout<<"The Actual value that is stored in X: "<<x<<endl;
    cout<<"The Address of the variable X itself: "<<&x<<endl;
    cout<<"Address of the variable X via a pointer : "<<p<<endl;
    cout<<"The address of the pointer itself : "<<&p<<endl;
    cout<<"The actual value that is stored in pointer : "<<*p<<endl; //This is called Derefrencing of pointer

    return 0;
}