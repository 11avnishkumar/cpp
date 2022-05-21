#include<iostream>
using namespace std;
class Outer{
    public:
    void fun(){
        i.display();
    }
    class Inner{
        public:
        void display(){
            cout<<"display of inner"<<endl;

        }
    };
    Inner i; /* we can create object of inner class immidiately after the defination of inner class other wise it 
    will throw an error */
};
int main(){
    Outer::Inner i; /*
    - creating inner class object outside of the class.
    - it is possible because of the reson that that inner class in under public access specifer it were private then
    - it would not be possible to create inner class object outside of the class.
    */

    return 0;
}