#include <iostream>
using namespace std;
class Sorting{
private:
    void Swap(int *x,int *y);
public:
    void BubbleSort(int arr[],int n);
    void InsertionSort(int arr[],int n);
    void SelectionSort(int A[],int n);
    void Display(char str[],int A[],int n);
};
// Swapping of two numbers
void Sorting::Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Bubble sorting
void Sorting::BubbleSort(int arr[],int n){
    int i,j;
    int flag;
    for (i = 0; i < n-1; i++)
    {	flag=0;
        for (j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                Swap(&arr[j],&arr[j+1]);
                flag = 1;
            }
        }
        if(flag==0) break;
    }
}
// Insertion Sort
void Sorting::InsertionSort(int arr[],int n) {
    int j=0;
    int x = 0;
    for (int i = 1; i < n; ++i) {
        j= i-1;
        x = arr[i];
        while (i>-1 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}
// Selection Sort
void Sorting::SelectionSort(int A[], int n) {
    int i ,j,k;
    for (i = 0; i < n-1; ++i) {
        j=k=i;
        while(j < n){
            if(A[j] < A[k]) k=j;
            else j++;
        }
        Swap(&A[i],&A[k]);
    }
}
// Display method
void Sorting::Display(char str[],int A[],int n) {
    printf("%s ",str);
    for (int i = 0; i < n; ++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
// Main Method
int main()
{
     Sorting s; /* Instance of the sorting class */
     int A[]={3,7,9,10,6,5,12,4,11,2,10},n=11;
//    int A[]={2,3,4,5,6,7,8,9,10,11},n=10;
//  Bubble sort
//    s.BubbleSort(A,n);
//    s.Display("Bubble Sort",A,n);
//    Insertion Sort
//    s.InsertionSort(A,n);
//    s.Display("Insertion Sort",A,n);
//  Selection Sort
    s.SelectionSort(A,n);
    s.Display("Selection Sort",A,n);
    return 0;
}
