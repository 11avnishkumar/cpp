/* 
Program to implement  array ADT using static memory 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Array{
  int *A; //  array
  int size; // size of the array
  int length; // length of the array

};


/* Insert */
void InsertElement(struct Array *arr, int index, int element){
    // check if the user has given the valid index or not
    // valid index =  0 to length of the array;
    int i = 0;
    if(index >= 0 && index <= arr->length){
        //shift the elements in the array
        for(i = arr->length; i > index; i--){
            arr->A[i] = arr->A[i - 1]; // shifting element
        }
        arr->A[index] = element; // insert the element
        arr->length++; // update the length
    }
}



/* To display elements into the array */
void DisplayElement(struct Array arr){
  for(int i = 0; i < arr.length; i++){
    printf("%d ",arr.A[i]);
  }
  printf("\n");
}

/* Append Method */
void AppendElement(struct Array *arr, int element){
    // Before appending the element we must check whether there is free space available
    if(arr->length < arr->size){
        // if true then space available, append the element
        arr->A[arr->length++] = element;
    }

}


/* Sum of  Element  */
int Sum(struct Array arr){
 int sum = 0;
 for(int i = 0; i < arr.length; i++){
        sum += arr.A[i];
 }
 return sum;
}


/* Using Recursion Sum of N natural Number */
int RecursiveSum(int A[] ,int n){
    if(n >= 0)
      return RecursiveSum(A, n - 1) + A[n];
    else
      return 0;
}

/* Average  */
float Avg(struct Array arr){
 return (float)Sum(arr)/arr.length;
 
}

/* Delete elements from the array */
int DeleteElement(struct Array *arr, int index){
int deleted_element = 0;
// check whether the index is valid or not
  if(index >= 0 && index <= arr->length){
    deleted_element = arr->A[index]; // store the deleted element
    for(int i = index; i < arr->length-1; i++) // shift the element
        arr->A[i] = arr->A[i + 1];
    arr->length--; // update the length of the array    
    return deleted_element;  // return deleted element  
  }
  return 0; // if the index is invalid
}

/* Maximum Element  */
int Max(struct Array arr){
 int max = arr.A[0];
 for(int i = 0; i < arr.length; i++){
    if(arr.A[i] > max )
        max = arr.A[i];
 }
 return max;
}

/* Minimum Element  */
int Min(struct Array arr){
 int min = arr.A[0];
 for(int i = 0; i < arr.length; i++){
    if(arr.A[i] < min )
        min = arr.A[i];
 }
 return min;
}

/* Set Method */
void Set(struct Array *arr,int element,int index){
 if(index<arr->length && index>=0)
    arr->A[index] = element;
}

/* Get Method */
int Get(struct Array arr,int index){
 if(index<arr.length && index>=0)
    return arr.A[index];
  return -1;
}

/* ***************** Linear Search ****************** */
 int LinearSearch(struct Array arr, int key){
    for(int index = 0; index < arr.length; index++){
        if(arr.A[index] == key)
            return index;
    }
    return - 1;
    
}

/* swap method */
void swap(int *x, int *y){
        int temp;
        temp = *x;
        *x  = *y;
        *y  = temp;
}

/* Transposition: Linear search */
int LSTransposition(struct Array *arr, int key){
    for(int index = 0; index < arr->length; index++){
        if(arr->A[index] == key){
            swap(&arr->A[index], &arr->A[index - 1]);
            return index;
        }
    }
    return - 1;
   
}

/* Move to Head: Linear Search */
int LSMoveToHead(struct Array *arr, int key){
    for(int index = 0; index < arr->length; index++){
        if(arr->A[index] == key){
            swap(&arr->A[index], &arr->A[0]);
            return index;
        }
    }
    return - 1;
    
}

/* Binary Search: To implement Binary Search the array must be in sorted order. */
int BinarySearch(struct Array arr, int element){
    int mid = 0;
    int low = 0;
    int high = arr.length - 1;
    while(low<=high){
        mid = ceil((low + high) / 2); // ceil method available in math.h header file
        if(element == arr.A[mid])
            return mid; // return index
        else if(element< arr.A[mid])
                high = mid - 1;
        else 
            low = mid + 1;            
    }
    return - 1; // if the search is Unsuccessful;
}


/* Recursive Method for Binary Search */
int RBinarySearch(int a[], int low, int high, int element){
    int mid = 0;
    if(low<=high){
        mid = ceil((low + high ) / 2);
        if(element == a[mid])
            return mid;
        else if(element < a[mid])
            return RBinarySearch(a, low, mid - 1, element);
            // check left hand side
        else 
            return RBinarySearch(a, mid + 1, high, element);    
            // check right hand side
    }
    return -1; // if no element found
}

/* Reverse of an array */

void Reverse(struct Array *arr){
    int *B;
    int i,j;
    B = (int *)malloc(arr->length * sizeof(int));
    for(i=arr->length-1, j=0; i>=0;i--,j++)
        B[j] = arr->A[i];

    for(i=0; i<arr->length; i++)
        arr->A[i] = B[i];
}    

/* Reverse an array using swapping method */
int ReverseSwapping(struct Array *arr){
    int i,j;
    int temp;
    for(i=0,j=arr->length-1; i<j; i++,j--){
      swap(&arr->A[i],&arr->A[j]);
    }
}

/* Insert at sorted Position only */
void InsertSorted(struct Array *arr,int element){
    int i = arr->length - 1;
    if(arr->length == arr->size)
        return;
    while(arr->A[i]>element){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = element;
    arr->length++;
}

/* check whether the Array is sorted or not */
int isSorted(struct Array arr){
    int i;
    for(i=0; i<arr.length-1; i++){
        if(arr.A[i] > arr.A[i+1])
            return 0;
    }        
    return 1;    
}

/* Negative on left side and positive on right side */
void Rearrange(struct Array *arr){
    int i = 0;
    int j = arr->length - 1;
    while(i < j)
    {
        while(arr->A[i] < 0) i++;
        while(arr->A[j] > 0) j--;
        if(i < j) swap(&arr->A[i],&arr->A[j]);

    }
}

/* Merging two arrays */
struct Array * Merge(struct Array *arr,struct Array *arr2){
int i,j,k;struct Array *arr3;

i = j = k = 0;

arr3 = (struct Array *)malloc(sizeof(struct Array));
while (i < arr->length && j < arr2->length)
{
    if(arr->A[i] < arr2->A[j]) 
        arr3->A[k++] = arr->A[i++];
    else 
        arr3->A[k++] = arr2->A[j++];  
}
for(;i<arr->length; i++) 
    arr3->A[k++] = arr->A[i];

for(;j<arr2->length; j++) 
    arr3->A[k++] = arr2->A[j];

arr3->length = arr->length + arr2->length;
arr3->size = arr->size + arr2->size;
return arr3;
}

/* Union in sorted array */

struct Array *Union(struct Array *arr,struct Array *arr2){
    int i,j,k;
    i = j = k = 0;
    struct Array *arr3;
    arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr->length && j < arr2->length)
    {
        if(arr->A[i] < arr2->A[j]) 
            arr3->A[k++] = arr->A[i++];
        else if(arr2->A[j] < arr->A[i])
            arr3->A[k++] = arr2->A[j++];
        else{
            arr3->A[k++] = arr->A[i++];
            j++;
        }      
    }
    for(;i<arr->length; i++) 
        arr3->A[k++] = arr->A[i];

    for(;j<arr2->length; j++) 
        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    arr3->size = arr->size + arr2->size;
    return arr3;    
}

/* Intersection sorted array */

struct Array *Intersection(struct Array *arr, struct Array *arr2){

    int i,j,k;
    i = j = k = 0;
    struct Array *arr3;

    arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr->length && j < arr2->length)
    {
        if(arr->A[i] < arr2->A[j]) 
            i++; 
            /*
            if elements in first array are less then the second array then just move i  
            */
        else if(arr2->A[j] < arr->A[i]) 
            j++;
            /* if elements in second array is less then first array's element
            then just move
            */ 
        else if(arr->A[i] == arr2->A[j])
        {
            arr3->A[k++] = arr->A[i++];
            j++;
            /*
            if elements in both the arrays are equal then simpley copy them into the 
            third array.
            */
        }      
    }

    arr3->length = k;
    arr3->size = arr->size + arr2->size;
    return arr3;    
}

/* Difference in Sorted Array */
struct Array *Difference(struct Array *arr, struct Array *arr2){
    int i,j,k;
    i = j = k = 0;
    struct Array *arr3;
    arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr->length && j < arr2->length)
    {
        if(arr->A[i] < arr2->A[j]) 
            arr3->A[k++] = arr->A[i++];
        else if(arr2->A[j] < arr->A[i])
            j++;
        else{
            i++;
            j++;
        }      
    }

    for(;i<arr->length; i++) 
        arr3->A[k++] = arr->A[i];

    arr3->length = k;
    arr3->size = arr->size + arr2->size;
    return arr3;    
}

/*
Menu Driven Program
*/


int main(){
  
  struct Array arr;
  int ch;
  int element,index;
  printf("Enter the size of the array\n");
  scanf("%d",&arr.size);
  arr.A=(int *)malloc(arr.size*sizeof(int));
  do{
  printf("Menu\n");
  printf("1. Insert\n");
  printf("2. Delete\n");
  printf("3. Search\n");
  printf("4. Sum\n");
  printf("5. Display\n");
  printf("6. Exit\n");

  printf("Enter your choice\n");
  scanf("%d",&ch);
  switch (ch)
  {
  case 1:
    printf("Enter an index and element ");
    scanf("%d%d",&index,&element);
    InsertElement(&arr,index,element);
    break;
  case 2:
    printf("Enter the index of the element you want to delete\n");
    scanf("%d",&index);
    printf("Element  %d deleted\n",DeleteElement(&arr,index));
    break;
  case 3:
   printf("Enter the element you want to search\n");
   scanf("%d",&element);
   printf("Element found at %d\n",LinearSearch(arr,element));
   break;
  case 4:
   printf("Sum of elements %d\n",Sum(arr));
   break;
  case 5:
    DisplayElement(arr);
    break;
  }
  }while(ch<6);

/* Array Operations */

//   arr3=Merge(&arr,&arr2);
//   arr3=Difference(&arr,&arr2);
//   arr3=Intersection(&arr,&arr2);
//   arr3=Union(&arr,&arr2);
//   DisplayElement(*arr3);
//   Rearrange(&arr);
//   InsertSorted(&arr,15);
//   InsertSorted(&arr,28);
//   printf("Is sorted = %d",isSorted(arr));
//   Reverse(&arr);
//   ReverseSwapping(&arr);
//   printf("\nDisplay: ");
//   DisplayElement(arr);
//   InsertElement(&arr,4,15);  // take index and element as argument
//   AppendElement(&arr,17);   // take element as argument
//   AppendElement(&arr,18);  // take element as argument
//   AppendElement(&arr,19); // take element as argument
//   printf("\nDeleted elements: %d",DeleteElement(&arr,2));
//   printf("\nDisplay: ");
//   DisplayElement(arr);
//   printf("\nIterative:Sum of elements %d",Sum(arr));  
//   printf("\nRecursive:Sum of elements %d",RecursiveSum(arr.A,5));  
//   printf("\nAverage: %f",Avg(arr));
//   printf("\nSetopeations:");
//   Set(&arr,100,9);
//   Get(arr,5);
//   printf("\nMaximum: %d",Max(arr));
//   printf("\nMinimum: %d",Min(arr));
//   printf("\nDisplay: ");
//   DisplayElement(arr);
//   printf("\nIterative: Binary Search %d",BinarySearch(arr,100));
//   printf("\nRecursive: Binary Search %d",RBinarySearch(arr.A,arr.A[0],arr.length,5));
//   printf("\nLinear Search:Key found at: %d",LinearSearch(arr,100));
//   printf("\nTransposition:Key found at: %d",LSTransposition(&arr,100));
//   printf("\nMoveToHead:Key found at: %d",LSMoveToHead(&arr,15));
//   printf("\nDisplay: ");
//   DisplayElement(arr);

return 0;

}



/* 
**************** Explanation ********************

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

***************** Merging ************ 

1. Merging: combining two sorted list into one sorted list
2. Time complexity O(m + n).

*************** Set operations ***************

Union and intersection: Time complexity O(n^2) for unsorted array

*/
