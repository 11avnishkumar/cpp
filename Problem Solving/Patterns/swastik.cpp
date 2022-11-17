#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n = 6;
int mid = n % 2 == 0 ? n / 2 :(n+1) / 2; // ternary operator
// printf("%d",mid);
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        if(i==mid || j==mid || (i==1 && j>=mid) || (j ==1 && i<=mid)) // here n=6 so we directly uses 6 instead of n
            printf("# ");
        else
            printf("  "); 
    }
    cout<<endl;
    }
    return 0;
}