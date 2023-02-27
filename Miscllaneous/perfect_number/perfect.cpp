#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            sum = sum+i; 
        }
    }
    if(2*n == sum)
      cout<<"it's a perfect number";
    else
      cout<<"Not a perfect number";  
}

// What is perfect number?
// when sum of factor of a given number is equal to double the given number
// example 1
// n = 8, 2 * n = 16
// factor of n = 1,2,4,8 sum of n = 1 + 2 + 4 + 8 = 15
// Here the given number is not a perfect number
// example 2
// n = 6, 2 * n = 12
// factor of n = 1,2,3,6 sum of n = 1 + 2 + 3 + 6 = 12
// Here the given number is perfect number

