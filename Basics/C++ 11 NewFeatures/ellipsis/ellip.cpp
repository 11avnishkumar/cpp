# include<iostream>
# include<cstdarg>
using namespace std;
    
/* program for ellipsis */
int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    int x;
    int s=0;
    for(int i=0;i<n;i++)
    {
        x=va_arg(list,int);
        s+=x;
    }
    return s;
}
int main()
{
    cout<<sum(3,10,20,30)<<endl; // the very first element indicate that how many elmenets we are goin to pass,here is 3
    cout<<sum(5,1,2,3,4,5)<<endl; // here 5 argument passed to the list
}

/*
Ellipses are used to pass variable length arguement to the function


*/