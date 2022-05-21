#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> v={2,4,6,5,6};
    // Example of linked list

    // inserting value into the linked list
    v.push_back(20);
    v.push_back(30);

    // Removing the value from the linked list
    v.pop_back();

    // Looping through the linked list using the 'iterator' is the part of STL

    list<int>::iterator itr;
    cout<<"displayed result using the iterator"<<endl;
    for(itr = v.begin(); itr != v.end(); itr++)
        cout<<++*itr<<endl;


    // Looping through the linked list and display the result using foreach loop

    cout<<"displayed result using the For loop"<<endl;
    for(int x:v)
        cout<<x<<endl;

    return 0;
}