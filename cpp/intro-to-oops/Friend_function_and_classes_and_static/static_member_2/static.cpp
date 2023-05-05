// Progarm to demonstrate the concept of Static keyword or static member
#include<iostream>
using namespace std;
class Innova{
public:
 static int price;
 static int getPrice(){
   return price;
 }
};

int Innova::price=20000; // static memeber initialized outside of the class using scope resolution operator

int main(){
   Innova i1,i2,i3;
   cout<<i1.price<<endl; 
   cout<<i3.price<<endl; 
   cout<<Innova::price<<endl;
   cout<<Innova::getPrice()<<endl;
  return 0;
}