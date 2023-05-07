#include<iostream>
#include<fstream>
using namespace std;
class Student{
 public:
string name;
int roll;
string branch;
friend ifstream & operator>>(ifstream &ifs,Student &s);
};
ifstream & operator>>(ifstream &ifs,Student &s)
{
ifs>>s.name;
ifs>>s.roll;
ifs>>s.branch; 
return ifs; 
}
int main(){
    Student s1;
    ifstream ifs("Student.txt");
    ifs>>s1;
    cout<<"Name "<<s1.name<<endl;
    cout<<"Roll "<<s1.roll<<endl;
    cout<<"Branch "<<s1.branch<<endl;
    ifs.close();
    return 0;
}

/* 
what is serialization?
Serialization is the process of storing and retrieving state of an object


*/