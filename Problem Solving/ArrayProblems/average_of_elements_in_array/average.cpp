/* finding average of all the elements in the arrays */
#include<iostream>
using namespace std;
int main(){
    int num[100],n;
    float sum=0,average=0;
    cout<<"Enter the number of element to store in array: "<<endl;
    cin>>n;
    cout<<"Enter the values:"<<endl;
    for(int i=0;i<n;i++){
        cin>>num[i]; //storing all the elements in arrays
        //calculate the sum
        sum += num[i];
    }
        cout<<"The sum: "<<sum<<endl;
        average = sum / n;
        cout<<"The average: "<<average;    

    return 0;
}