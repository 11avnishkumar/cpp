#include<iostream>
using namespace std;
// Pattern program
int main(){
    int rows,cols;
    for(int rows=0;rows<6;rows++){
        for(cols=0;cols<6;cols++){
            if(cols>6 && cols>6-1)
                cout<<"*"<<endl;
            else
                cout<<"0"<<endl;
        }
    cout<<endl; // print new line after each row
    }
    return 0;
}

// Output expected
/*
          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *

*/
