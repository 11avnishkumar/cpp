#include<stdio.h>
int g = 10;

int fun(){
  int l = 10;
  printf("l = %d\n",l);
  l++;
  printf("l = %d\n",l);

}
int main(){
  printf("g = %d\n",g);
  fun();
  g++;
  fun();
  printf("g = %d\n",g);
  return 0;
}
/* 
1. As the execution of fun() function is finished the value of variable 'l'
get lost.

2. when function will execute again then the value will reassigned to the variable 'l'

3. To prevent loosing the value of local variable 'l' we will use static keyword

*/