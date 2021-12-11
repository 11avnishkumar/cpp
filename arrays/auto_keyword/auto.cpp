#include<iostream>
using namespace std;
int main(){
    //Example of autokeyword
    char c[] = {41,'a','b','c',73}; //char  type of array
     
	    for(auto x:c)
	       cout<<x<<endl;
        cout<<"##############################"<<endl;
        for(int x:c)
	       cout<<x<<endl;

    return 0;
}