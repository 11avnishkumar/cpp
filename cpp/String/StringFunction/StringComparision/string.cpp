#include<iostream>
#include<cstring>
using namespace std;
int main(){
  // Program to compare two string
  // char s1[20] = "Hello";
  // char s2[20] = "Hello";
  char s1[20] = "HellO";
  char s2[20] = "hello";
  cout<<strcmp(s1,s2);
  return 0;
}
// The strcmp() function compare two string and returns following:
//  0 => if two string are equal
// -ve integer => if the first string is smaller then the second.
//  +ve integer => if the first string is larger then the second.
// Note: "hello" and "Hello" are two different string,because their ASCII are different.
// The difference between uppercase alphabet (A) ASCII code and lowercase alphabet (a) ASCII code is 32
// A-a = 97 - 65 = 32
// Therfore the differce between two same letter in Upper and Lower case will be 32