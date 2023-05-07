#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> v={2,4,6,5,6};
    // Example of linked list

    // inserting value into the linked list from the front
    v.push_front(20);
    v.push_front(30);

    // Removing the value from the linked list
    v.pop_front();

    // Looping through the linked list using the 'iterator' is the part of STL

    forward_list<int>::iterator itr;
    cout<<"displayed result using the iterator"<<endl;
    for(itr = v.begin(); itr != v.end(); itr++)
        cout<<*itr<<endl;


    // Looping through the linked list and display the result using foreach loop

    cout<<"displayed result using the For loop"<<endl;
    for(int x:v)
        cout<<x<<endl;

    return 0;
}
/* 
On the forward_list push_back() operation will not be performed.
instead of push_back() forward_list support the push_front() method
for inserting the element inside the forward_list


*/
