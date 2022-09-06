/* 
    Program to implement  array ADT using static memory 
*/

#include<iostream>
#include<math.h>
using namespace std;

class Array{

private:

    int *A; //  array pointer
    int size; // size of the array
    int length; // length of the array
    void Swap(int *x, int *y); // private we need it inside another function only

public:

    Array();
    Array(int size, int length);
    ~Array();
    void InsertElement(int index,int element);
    void InsertSorted(int element);
    void DisplayElement();
    void AppendElement(int element);
    int Sum();
    int RSum(int A[],int n);
    float Avg();
    int DeleteElement(int index);
    int Max();
    int Min();
    int Get(int index);
    void Set(int index, int element);
    void Concat();
    void Merge();
    void Union();
    void Intersection();
    void Difference();
    int LinearSearch(int key);
    int RLinearSearch(int key);
    int LSTransposition(int key);
    int LSMoveToHead(int key);
    int BinarySearch(int key);
    int RBinarySearch(int low, int high, int key);

};

/* Constructor for initializing the array */
Array::Array(){
    size = 0;
    length = 0;
    A = new int[size];

}

Array::Array(int size, int length){
    A = new int[size];
    this->size = size;
    this->length = length;

}

/* Insert */
void Array::InsertElement(int index, int element){
    // check if the user has given the valid index or not
    // valid index =  0 to length of the array;
    int i=0; // counter variable
    if(index>=0 && index<=length){
        //shift the elements in the array
        for(i=length; i>index; i--){
            A[i] = A[i - 1]; // backward shifting element
        }
        A[index] = element; // insert the element at the position
        length++; // update the length of the array
    }
}

/* Insert at sorted position */
void Array::InsertSorted(int element){
    int i = length - 1;
    if(length == size)
        return;
    while(A[i]>element){
        A[i+1] = [i];
        i--;
    }
    A[i+1] = element;
    length++;
}

/* To display elements into the array */
void Array::DisplayElement(){
  for(int i=0; i<length; i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
}

/* Append Method */
void Array::AppendElement(int element){
    // Before appending the element we must check whether there is free space available
    if(length<size){
        // if true then space available, append the element
        A[length++] = element;
    }

}


/* Sum of  Element  */
int Array::Sum(){
 int sum = 0;
 for(int i = 0; i < length; i++){
        sum += A[i];
 }
 return sum;
}


/* Using Recursion Sum of N natural Number */
int Array::RSum(int A[] ,int n){
    if(n >= 0)
      return RSum(A, n - 1) + A[n];
    else
      return 0;
}

/* Average  */
float Array::Avg(){
 return (float)Sum()/length;
 
}

/* Delete elements from the array */
int Array::DeleteElement(int index){
int deleted_element = 0;
// check whether the index is valid or not
  if(index >= 0 && index <=  length){
    deleted_element = A[index]; // store the deleted element
    for(int i = index; i <  length-1; i++) // shift the element
        A[i] = A[i + 1];
     length--; // update the length of the array    
    return deleted_element;  // return deleted element  
  }
  return 0; // if the index is invalid
}

/* Maximum Element  */
int Array::Max(){
 int max = A[0];
 for(int i = 0; i < length; i++){
    if(A[i] > max )
        max = A[i];
 }
 return max;
}

/* Minimum Element  */
int Array::Min(){
 int min = A[0];
 for(int i = 0; i < length; i++){
    if(A[i] < min )
        min = A[i];
 }
 return min;
}

/* Set Method */
void Array::Set(int index, int element){
 if(index<length && index>=0)
    A[index] = element;
}

/* Get method */
int Array::Get(int index){
    if(index<length && index>=0)
        return A[index];
    return -1;
}

/*  Linear Search  */

 int Array::LinearSearch(int key){
    for(int index = 0; index<length; index++){
        if(A[index] == key)
            return index;
    }
    return - 1;
    
}

void Array::swap(int *x, int *y){
        int temp;
        temp = *x;
        *x  = *y;
        *y  = temp;
}

/* Transposition: Linear search */

int Array::LSTransposition(int key){
    for(int index = 0; index<length; index++){
        if(A[index] == key){
            swap(&A[index], &A[index - 1]);
            return index;
        }
    }
    return - 1;
   
}

/* Move to Head: Linear Search */

int Array::LSMoveToHead(int key){
    for(int index = 0; index<length; index++){
        if(A[index] == key){
            swap(&A[index], &A[0]);
            return index;
        }
    }
    return - 1;
    
}

/* Binary Search: To implement Binary Search the array must be in sorted order. */

int Array::BinarySearch(int key){
    int mid = 0;
    int low = 0;
    int high = length - 1;
    while(low<=high){
        mid = ceil((low + high) / 2); // ceil method available in math.h header file
        if(key == A[mid])
            return mid; // return index
        else if(key<A[mid])
                high = mid - 1;
        else 
            low = mid + 1;            
    }
    return - 1; // if the search is Unsuccessful;
}


/* Recursive Method for Binary Search */
int Array::RBinarySearch(int a[], int low, int high, int key){
    int mid = 0;
    if(low<=high){
        mid = ceil((low + high ) / 2);
        if(key == a[mid])
            return mid;
        else if(key < a[mid])
            return RBinarySearch(a, low, mid - 1, key);
            // check left hand side
        else 
            return RBinarySearch(a, mid + 1, high, key);    
            // check right hand side
    }
    return -1; // if no element found
}
    

int main(){
  
  /* Create instance of the class */
  Array arr;
  
/* Array operations */
  cout<<"\nDisplay: ";
  arr.DisplayElement();
  arr.InsertElement(4,15); 
  arr.AppendElement(17);   
  arr.AppendElement(18); 
  arr.AppendElement(19); 
  cout<<("\nDeleted elements: %d",arr.DeleteElement(2));
  cout<<("\nDisplay: ");
  arr.DisplayElement();
  cout<<("\nIterative:Sum of elements %d",arr.Sum());  
  cout<<("\nRecursive:Sum of elements %d",arr.RecursiveSum(A,5));  
  cout<<("\nAverage: %f",arr.Avg());
  cout<<("\nSetarreations:");
  arr.Set(9,100);
  cout<<("\nMaximum: %d",arr.Max());
  cout<<("\nMinimum: %d",arr.Min());
  cout<<("\nDisplay: ");
  arr.DisplayElement();
  cout<<("\nIterative: Binary Search %d",arr.BinarySearch(100));
  cout<<("\nRecursive: Binary Search %d",arr.RBinarySearch(A,A[0],length,5));
  cout<<("\nLinear Search:Key found at: %d",arr.LinearSearch(100));
  cout<<("\nTransposition:Key found at: %d",arr.LSTransposition(100));
  cout<<("\nMoveToHead:Key found at: %d",arr.LSMoveToHead(15));
  cout<<("\nDisplay: ");
  arr.DisplayElement();

return 0;

}



/* 
****************Explanation********************

********* Insert ***************
1. Used to insert the element into the array at any given position
    1.1 Time complexity
    1.2 Space complexity

*********** Append ******************
1. Used to insert the element at then end of the array.
    1.1 Time complexity
    1.2 Space complexity

*********** Display ***********
1. Used to Display all the elements 
    1.1 Time complexity
    1.2 Space complexity

*********** Sum ****************
1. Used to find the sum of all the elements of an array
2. There are two ways to find the
  2.1 Iterative
    2.10 It is more efficient in terms of space 
    2.11 Time complexity is O(n)
    2.12 Space complexity is O(1)
  2.2 Recursive
    2.20 It is costly in terms of Space
    2.22 Time complexity O(n)
    2.23 Space complexity O(n)

********** Set **************
1. The set function will not insert element instead it will replace 
  the element at a given position.
2. set method will take three parameter array,index,element.
3. Time Complexity O(1)
4. Space Complexity O(1)  







*/
