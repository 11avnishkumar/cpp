#include<stdio.h>
int g = 10; // global variable
int fun(){
   int a = 10; // local variable
   a++;
   g++;
   printf("%d\n",a);
   printf("%d\n",g);
  return 0; 
}
int main(){
  // Program to demonstrate the example of local and global variable
  g++;
  fun();
  printf("%d\n",g);
  // printf("%d\n",a); //accessing variable 'a' from here will throw
  // an error because it is local to fun function.
  
  return 0;
}

/* 
1.Global variable can be accessed from anywhere in the program.
2.Global variable declared inside the program/code section.
3.Global varaible values remains as long as the program is running.

4.local variable can be accessed only inside the scope/function/block
in which that variable is created once the function execution finished the variable
value lost.
4.local variable have memory allocation inside the stack area.
5.local variable given the priority,when a function is execute it try to find the variable
inside the nearest scope. 
 */