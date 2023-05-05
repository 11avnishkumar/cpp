#include<iostream>
using namespace std;
struct demo{
  int length;
  int breadth;

  // Method
  int  area(){
    return length * breadth;
  }
};
int main(){
 struct demo r1;
 r1.length = 10;
 r1.breadth = 5;
 cout<<"The area: "<<r1.area()<<endl;
}
// C++ stucture vs class
/* 
In c++ structure we can also defined method apart from the variables.
The only differece between is that by default, structure in c++ is public
and the class is private

*/
