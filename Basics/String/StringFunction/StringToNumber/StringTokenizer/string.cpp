#include<iostream>
#include<cstring>
using namespace std;
int main(){
  // program to tokenize the string
  char s1[20] = "x=10;y=20;z=35";
  // cout<<strtok(s1,"=;")<<endl; //This only give the output x, but we need all so we loop throug
  char *token = strtok(s1,"=;");
  while(token != NULL){
    cout<<token<<endl;
     token = strtok(NULL,"=;");
}
  return 0;
}