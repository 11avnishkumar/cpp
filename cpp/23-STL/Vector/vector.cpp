#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={2,4,6,5,6};

    //v(10) optionall we can mention the size also,default size is 16 for vector

    // inserting value into the vector
    v.push_back(20);
    v.push_back(30);

    // Removing the value from the vector
    v.pop_back();

    // Looping through the vector using the 'iterator' is the part of STL

    vector<int>::iterator itr;
    
    cout<<"displayed result using the iterator"<<endl;
    for(itr = v.begin(); itr != v.end(); itr++)
        cout<<++*itr<<endl;


    // Looping through the vector and display the result using foreach loop

    cout<<"displayed result using the For loop"<<endl;
    for(int x:v)
        cout<<x<<endl;



    // Vectors of pairs
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    // Ways to initilization and declraration of vectors
    vector<int> ve(5,100); // declare vector of size 5 and all are filled with 100
    vector<int>ve(5); //vector of size 5;
    vector<int>ve(10,52);
    vector<int>ve1(ve); // copy above vectors

    return 0;
}

/*
vector is nothing it is just a template based array.
- we can store any data inside the vectory because of the flexibility that template provides.
- vector can increase or decrease the size automatically.it is also called self managed array.


*/

/* 
What is STL?
stl stand for standard template language
-It is easier to implement data structure using stl
-There is built in classes/stl available for implementing almost all data structures
for example
->Vector
->Set
->Multiset
->deque
->queue
->stack
->list
->forward_list


Three core component of STL are:

-Algorithms
-Iterator
-


*/

