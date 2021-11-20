#include<iostream>
using namespace std;
int main(){
 int result;
 result = 2 * 5 + 10;
 cout<<"The result is: "<<result<<endl;
 result = 2 * (5 + 10);
 cout<<"The result is: "<<result<<endl;
}
// Precedence rule
// Operator     Precedence level
// () parenthesis = 3
// *, /, %   =    2
// +,- = 1
// for example
// 2*5+10 can give different result.let's see how
// 2*5+10 = 20
// 2*(5+10) = 30 -> This is because of () parenthesis have higher precedence then multiplication