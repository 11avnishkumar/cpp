// Progarm to demonstrate the concept of Static keyword or static member
#include<iostream>
using namespace std;
class Student{

public:
int roll;
string name;
 static int addNo;
 Student(string n){
     addNo++;
    }

 void display(){
     cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
 }
};
int Student::addNo=0; // static memeber initialized outside of the class using scope resolution operator

int main(){
 Student s1("john"); 
 Student s2("john"); 
 s1.display();
 s2.display();
 cout<<"Number of Admission "<<Student::addNo<<endl;
  return 0;
}