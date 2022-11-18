#include<iostream>
using namespace std;
int main(){
    // webkul pattern
    // Time limit 60mins
    // user input
    int number; 
    cout<<"Enter the Number!Please enter only odd number and must be greater then 1: ";
    cin>>number;


    int mid = (number+1)/2; // to print the vertical @
    // printf("%d",mid);
    for(int i=1; i<=number; i++){
        for(int j=1; j<=number+2; j++){
            printf("e");
        }
        printf("\n");
    }
    // for vertical @ and horizontal @
    // here the outer forloop will be run for number + 2 times.
    // and inner foloop also run for number +2 times.
    for(int i=1; i<=number+2; i++){
        // for vertical @
        for(int j=1; j<=number+2; j++){
            if(j==mid+1) // These two condition must be handled gracefully
            printf("@");
            if(j<=mid) // This condition must be handled carefully otherwise below pattern will not work properly,The spaces will be printed left side of the vertical line.
            printf(" ");
        }
        // below loop is for horizontal @
        // for horizontal @ will run number+1 times,that is even times.
        // The below loop start immidiately after the vertical @
        for(int j=1; j<=number+1; j++){
            if(i==number+2)
            printf("@");
            else
            printf(" ");
        }
        // start printing the arrow whatever the mid value  + 2
        // mid + 2,this we have done because as number of odd input will increase the upper half of the arrow will move in upward direction.Therefore we must start the arrow after calculating the horizontal @ and then we decide from where to start the j loop.
        for(int j=mid+2; j<=i; j++){
            printf("#");
        }
        printf("\n");
    }
    /* Start of downward pyramid */
    // for the downward pyramid all the above code will be same except for printing any symbol just print the spaces.
    for(int i=1; i<=number+2; i++){
        for(int j=1; j<=number+2; j++){
            if(j==mid+1) // These two condition must be handled gracefully.
            printf(" ");
            if(j<=mid) // This condition must be handled carefully otherwise below pattern will not work properly,The spaces will be printed left side of the vertical line.
            printf(" ");
        }
        // for horizontal @ will run number+1 times,that is even times.
        // The below loop start immidiately after the vertical @
        for(int j=1; j<=number+1; j++){
            if(i==number+2)
            printf(" ");
            else
            printf(" ");
        }
        // start printing the arrow whatever the mid value is,otherwise it will print the mid line twice.
        // if you don't understand just remove the mid from the bottom and use any number from 1 onwards.
        for(int j=mid; j<=number-i; j++){
            printf("#");
        }
        printf("\n");
    }
    
        
        
return 0;    
}
