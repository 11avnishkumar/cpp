// Program to demonstrate the example of function to pointer
#include<iostream>
using namespace std;
int max(int x,int y)
{
    return x > y ? x : y;
     
}

int main()
{

// datatype (*pointer_name) (int,int) syntax 

//if the function have parameter then pass only parameter data type, not the actual parameter.
int (*func)(int,int); // Pointer initialization
func = max(x,y);
(*func) = (10,5);

}
