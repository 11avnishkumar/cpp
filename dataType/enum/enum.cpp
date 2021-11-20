#include<iostream>
using namespace std;
int main(){
    // enum day {sun,mon,tue,wed,thu,fri,sat}; 
    //These are constants
    // day d = fri; 
    enum day {sun=1,mon,tue,wed,thu,fri,sat}; 
    //These are constants 
    day d2 = fri; 
    //by default the value will assigned 0 to the first element so "fri = 5"
    // if we assigned the value one to the first element in enum data type then it
    // will follow the sequence from there only.
    // *************************************
    // now th value has been changed so as said it will follow the sequence 
    //therefore "fri" have value 6

    cout<<d2<<endl;

}