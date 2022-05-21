#include<iostream>
using namespace std;
int main(){
    // const int x = 10; // this statement is equivalent to the below statement
    // int const x = 10;
    //x++; /* we can not increment the value of constant  */
    // cout<<x<<endl;


    /* Program No second   */

   /*  const int x = 10;  if we try to run the below program it will throw an error because the
   value of constant can not incremented
   */ 
  /*
    // const // int x = 10;
    int *ptr=&x;
    cout<<*ptr<<endl;
    ++*ptr; // increment
    cout<<*ptr<<" "<<x<<endl; 
    // output will be 11 and 11
   */


    /* Program No 3  */
    int x = 10;
    //const int *ptr=&x; 
    //int const *ptr=&x; // The above statement and this statement is same
    int * const ptr = &x; // we can not make pointer to some where else
    //const int * const ptr = &x;
    ++*ptr;
    int y = 20;
    //ptr = &y; // now pointer is pointing to y
    cout<<*ptr<<endl;
    // ++*ptr; // increment // 
    cout<<*ptr<<" "<<x<<endl; 



    return 0;
}