/* 
Program for array ADT using Dynamic Memory
*/
#include<stdio.h>
#include<stdlib.h> 
struct Array{
  int *A; // for creating a dynamica array
  int size; // size of the array
  int length; // length of the array

};



void DisplayElement(struct Array arr){
  printf("Elements in array are: ");
  for(int i = 0; i < arr.length; i++){
    printf("%d ",arr.A[i]);
  }
  printf("\n");
}


int main(){
  void DisplayElement(struct Array arr); 
  struct Array arr;
  int i,n; // for storing elements in array as well as counter
  // to implement the array we must know the size of the array
  printf("Enter the size of the array: \n");
  scanf("%d",&arr.size);

  // after knowing the size of the array we must create an array of that size
  // Two ways to create an array either in Heap or stack
  // Here we are going to create in the Heap
  // Generally array created in Heap is a dynamic array
  // Let's see how to dynamically allocate memory in c

  arr.A = (int *) malloc(arr.size * sizeof(int)); //Dynamic Memory allocation
  arr.length = 0; // array of length 0 size.
  printf("Enter the number of elements:\n");
  scanf("%d",&n);

  printf("Enter all the elements:\n");
  for(i = 0; i<n; i++){
     scanf("%d",&arr.A[i]);
  }
  arr.length = n; // set the length of the array to n;


  /* Array Operations */
  
  DisplayElement(arr);  

return 0;

}