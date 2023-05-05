//Improved version of power function using recursion
#include<stdio.h>
int power(int m,int n){
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return power(m * m,n/2);
    else
        return power(m * m,(n - 1)/2) * m;
}
int main(){
int r;
r = power(5,2);
printf("%d ",r);

}

/*  ***********Explanation*********

This method takes less number of multiplication as compared to previous method.
Here we have used an formula
 if n == even
    power(m * m, n/2)
 else
    power(m * m,(n-1)/2) * m

*/
