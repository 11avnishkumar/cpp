#include<iostream>
using namespace std;
    
/*   program for all about catch  */

class myexception1: exception
{
};

class myexception2:public myexception1
{
};

int main()
{
	try
	{
		throw myexception1();
	}
	catch(myexception2 e) // Child class exception first 
	{
		cout<<"int catch"<<endl;
	}
	catch(myexception1 e) // Parent class exception
	{
		cout<<"double catch"<<endl;
	}
	catch(...) /* This is called an ellipse and it is for handling any kind of exception*/
	{
		cout<<"all catch"<<endl;
	}
}


/*

we must write Child class exception first
then write the Parent class exception 

*/