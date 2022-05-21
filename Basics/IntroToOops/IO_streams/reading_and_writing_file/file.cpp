#include<iostream> // for input/output stream
#include<fstream> // for file handling
using namespace std;

int main(){
    ofstream ofs("My.txt",ios::trunc);
    ofs<<"John"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;
    ofs.close();
    return 0;
}

