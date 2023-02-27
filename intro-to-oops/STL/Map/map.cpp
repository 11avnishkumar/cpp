#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"john"));
    m.insert(pair<int,string>(2,"jane"));
    m.insert(pair<int,string>(3,"smith"));
    m.insert(pair<int,string>(4,"peter"));
    m.insert(pair<int,string>(5,"seeta"));

    map<int,string>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    map<int,string>::iterator itr1;
    itr1=m.find(2); // finding a value using a key
    cout<<"Value found is"<<endl;
    cout<<itr1->first<<" "<<itr1->second<<endl;
    
    return 0;
}
/*
Map is used for key:value pairs for storing data.



*/