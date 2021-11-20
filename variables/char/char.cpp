#include<iostream>
using namespace std;
int main(){
    char x = 'A',y = 'B';
    cout<<"The result of divison 'x' by 'y' with typecast is:"<< (float)x/y<<endl;
    cout<<"The result of divison 'x' by 'y' without typecast is:"<<x/y<<endl;
    cout<<"The result of divison 'y' by 'x' with typecast is:"<<(float)y/x<<endl;
    cout<<"The result of divison 'y' by 'x' without typecast is:"<<y/x<<endl;
}
// The above program is showing the result on the basis of ASCII Characterset
// FOR UPPERCASE OF A - Z  THE VALUE IS 65 - 90
// FOR LOWECASE OF a - z THE VALUE IS 
// FOT OTHER CHARACTER SET