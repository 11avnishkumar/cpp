#include<stdio.h>
int main(){
  // Write a program to transpose the given matrix

  int matrix[3][3],rows,cols;

  printf("Please enter the element of Matrix of 3 x 3: \n");
  for(rows = 0; rows<3; rows++){
    for(cols = 0; cols<3; cols++){
      scanf("%d",&matrix[rows][cols]);
    }
  }

  // Transpose of Matrix

  printf("Transpose of matrix is: \n");
  for(int rows=0;rows<3;rows++){
    for(int cols=0;cols<3;cols++){
      printf("%d  ",matrix[cols][rows]);
    }
    printf("\n");
  }
  return 0;
}