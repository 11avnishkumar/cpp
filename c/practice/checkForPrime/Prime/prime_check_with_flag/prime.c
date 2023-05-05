#include<stdio.h>
int main(){
  // write a program to check whether the given number is prime or not
  // if it is prime then return 1 else return 0
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);

  // function for checking whether the given number is prime or not
  int check_prime(int isPrime){
  if(isPrime % 2 != 0 || isPrime == 2)
      return 1;
  else
      return 0;
  }

  printf("%d",check_prime(number));

  return 0;
}

// Since 2 is only even prime number we need to check it also if the user entered 2 then we don't
// need to compare it further just return 1