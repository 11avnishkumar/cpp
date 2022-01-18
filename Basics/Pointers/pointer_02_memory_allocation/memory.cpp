#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter number of elements:";
    cin>>size;
    int a[size]; //The size of the memeory will be created whatever size the
    //user will provide
    cout<<"This is the size of memory in bytes: "<<sizeof a<<endl;
    /*Whatever the size will be provided by the user will be multiplied
    by 4 i.e (size * 4),because each interger hold size of 4 byte.
    */

    /*
    Now again if we want to increase the size of the array
    Then we can not follow the above approach again to increase the size
    of the array
    for example
    we can not do the below mention code once again

     cout<<"Enter number of elements:";
     cin>>size;
     int a[size];

    Remember: once a array created of any size in the program it can not
    Modified in any circumstances.
    
    if we want to increase or decrease the size of the array 
    dynamically Then we must follow the below method

    int size;
    cout<<"Enter the no of elements:"<<endl;
    cin>>size;
    int *p = new int[size]; //new is the keyword

    The above mentioned code will create the array,size will be given by the user
    But before giving or creating array of new size for the array we must delete
    the Previous array memory otherwise it will be waste of memeory

    delete []p; //This is the statement we have to write for deleting dynammic Memory


    The below mentioned code will create the array,size will be given by the user
    cout<<"Enter new size:"<<endl;
    cin>>size;
    p=new int[size];
    
    */
}