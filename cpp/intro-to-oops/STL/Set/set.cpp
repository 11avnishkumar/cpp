#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> v={2,4,6,5,6};
    // Example of set

    // inserting value into the set
    v.insert(20);
    v.insert(30);

    // Removing the value from the set
    // v.remove();

    // Looping through the set using the 'iterator' is the part of STL

    set<int>::iterator itr;
    cout<<"displayed result using the iterator"<<endl;
    for(itr = v.begin(); itr != v.end(); itr++)
        cout<<*itr<<endl;


    // Looping through the set and display the result using foreach loop

    cout<<"displayed result using the For loop"<<endl;
    for(int x:v)
        cout<<x<<endl;

    return 0;
}

/*
-set stores unique elements only,duplicate values are not allowed in set.



*/