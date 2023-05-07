#include<iostream>
using namespace std;
int main(){
   
    typedef int roll_no;
    typedef int marks; // These are for storing marks 
    typedef int age;  //These are example of storing age
    // now if want to declare a variable of type int 
    // just user roll_no,no need to use "int"
    // in this case we are going  to stor rollno 
    // of the students
    //************* for example**************
    roll_no r1 = 50;
    roll_no r2 = 90;
    roll_no r3 = 65;
    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;
    
    // The purpose of typedef is for readeabilty of the program only

 return 0;
}