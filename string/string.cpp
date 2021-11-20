#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Please enter your name: ";
    //cin>>name;
    getline(cin,name);
    cout<<"Your name is "<<name<<endl;
    // ******************************************
    // if we will give the fullname to this program 
    //written above it will will only print the first name
    //for example if provide "john doe" then it will print only john
    //two print the fullname we have to use another function
    //or method
    //=======getline(cin,name)========
    // getline take to arguement one is input object and the other is string
}