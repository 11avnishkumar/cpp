#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ifstream ifs("My.txt");
    ifstream ifs;
    ifs.open("My.txt");
    // if(ifs) cout<<"File is open"<<endl; // method 1
    if(ifs.is_open()) cout<<"File is open"<<endl; // method 2
    string name;
    int roll;
    string branch;
    ifs>>name>>roll>>branch;
    ifs.close();
    cout<<"name "<<name<<endl;
    cout<<"Roll no "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;

    return 0;
}