#include<iostream>
using namespace std;
int main(){
    int principle;
    float rate,time;
    float total_interest;
    float total_amount;
    cout<<"Enter the principle:"<<endl;
    cin>>principle;
    cout<<"Enter the rate of interest:"<<endl;
    cin>>rate;
    cout<<"Enter the time period for which the interest will be calculate:"<<endl;
    cin>>time;
    total_interest = (principle * rate * time)/100;
    cout<<"Principle amount: "<<principle<<" Interest amount: "<<total_interest<<endl;
    total_amount = principle + total_interest;
    cout<<"Total amount you have to pay after "<<time<<" year is: "<<total_amount<<endl;
}