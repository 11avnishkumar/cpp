#include<iostream>
using namespace std;
int main(){
    // Dynamic Memory allocation to heap
    int *p = new int[5]; //This is dynamic memory allocation to array in heap

    p[0] = 5;
    p[1] = 10;
    cout<<p[1]<<endl;

    /*
    before assigning null value to the pointer we must first delete the memory
    allocated to the array first, otherwise it cause the memory leakeag problem
    */

    delete []p; //This syntax means delete the memory which is allocated to array
    p = NULL; //Pointer will no longer point to Dynamic memory allocation
    //which is created above
    p = nullptr; //This is modern c++ syntax to assign a pointer null value

    /*
    Instead of writing p = NULL
    p=nullptr is known as literal
    */
    return 0;
}