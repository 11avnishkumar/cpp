<!-- TOC -->
* [Introduction To C++](#introduction-to-c)
  * [Data Types](#data-types)
    * [Built In Data Types](#built-in-data-types)
    * [Derived Data Types](#derived-data-types)
    * [User-defined Data Types](#user-defined-data-types)
  * [Enumerator Data type](#enumerator-data-type)
    * [Type Def data type](#type-def-data-type)
    * [Short Circuit Evaluation](#short-circuit-evaluation)
  * [Loops](#loops)
    * [For loop](#for-loop)
    * [Infinite for loop](#infinite-for-loop)
    * [while loop](#while-loop)
    * [do while loop](#do-while-loop)
  * [Memory Allocation](#memory-allocation)
      * [Dynamic Memory Allocation](#dynamic-memory-allocation)
  * [Arrays](#arrays)
    * [Declaration of array.](#declaration-of-array)
    * [Initialization and Declaration of array.](#initialization-and-declaration-of-array)
    * [Exceeding the size of array](#exceeding-the-size-of-array)
    * [Array without size](#array-without-size)
    * [For each loop](#for-each-loop)
      * [Example](#example)
    * [Advantages of for-each loop over for loop?](#advantages-of-for-each-loop-over-for-loop)
    * [Another example of for each loop](#another-example-of-for-each-loop)
    * [Types of arrays element](#types-of-arrays-element)
    * [The auto keyword in c ++](#the-auto-keyword-in-c-)
    * [Example of auto keyword with char type array.](#example-of-auto-keyword-with-char-type-array)
  * [Structure](#structure)
    * [Structure To Pointer](#structure-to-pointer)
      * [Point To Remember](#point-to-remember)
  * [Functions](#functions)
    * [Function Overloading](#function-overloading)
    * [Function template](#function-template)
    * [Function with default arguments](#function-with-default-arguments)
    * [Function pass by value](#function-pass-by-value)
    * [Function pass by reference](#function-pass-by-reference)
    * [Function pass by address](#function-pass-by-address)
    * [Function return by address](#function-return-by-address)
    * [Function return by reference](#function-return-by-reference)
  * [Global and Local variables](#global-and-local-variables)
  * [String](#string)
    * [Program demonstrating the use of Null character](#program-demonstrating-the-use-of-null-character)
    * [Program Demonstrating the use of ASCII character](#program-demonstrating-the-use-of-ascii-character)
  * [Pointer](#pointer)
    * [Static Memory Allocation for array](#static-memory-allocation-for-array)
    * [Dynamic Memory Allocation for array.](#dynamic-memory-allocation-for-array)
  * [Storage Class](#storage-class)
  * [Intro To OOPS](#intro-to-oops)
    * [Class](#class)
      * [Points to remember](#points-to-remember)
    * [Creating pointer to object](#creating-pointer-to-object)
    * [Creating object to pointer inside the heap memory.](#creating-object-to-pointer-inside-the-heap-memory)
    * [Encapsulation](#encapsulation)
    * [Accessor and Mutator](#accessor-and-mutator)
    * [Constructor](#constructor)
    * [Type of constructor](#type-of-constructor)
    * [Types of function available in a class](#types-of-function-available-in-a-class)
    * [Scope resolution operator](#scope-resolution-operator)
  * [Exception Handling](#exception-handling)
  * [C++ New Features](#c-new-features)
    * [Smart Pointers](#smart-pointers)
  * [Miscellaneous](#miscellaneous)
    * [Arm strong number](#arm-strong-number)
    * [Perfect number](#perfect-number)
<!-- TOC -->
# Introduction To C++
- C++ is a superset of c programming language.
- It is object-oriented-language.
- Used to make system application.
## Data Types
### Built In Data Types
| Data Types | Sizes | Examples | Descriptions |     |
|------------|-------|----------|--------------|-----|
| Int        |       |          |              |     |
| Float      |       |          |              |     |
| char       |       |          |              |     |
| boolean    |       |          |              |     |
| string     |       |          |              |     |
| Double     |       |          |              |     |

### Derived Data Types
| Data Types | Sizes | Examples | Descriptions |     |
|------------|-------|----------|--------------|-----|
| Array      |       |          |              |     |
| Function   |       |          |              |     |
| Pointers   |       |          |              |     |
| Double     |       |          |              |     |
| Double     |       |          |              |     |
| Double     |       |          |              |     |

### User-defined Data Types
| Data Types | Sizes | Examples | Descriptions |     |
|------------|-------|----------|--------------|-----|
| Double     |       |          |              |     |
| Double     |       |          |              |     |
| Double     |       |          |              |     |
| #          |       |          |              |     |

## Enumerator Data type
Enumerator data type is nothing but a set of constants defined by the user.
```cpp
#include<iostream>
using namespace std;
int main(){
 // enum day {sun,mon,tue,wed,thu,fri,sat}; 
 //These are constants
 // day d = fri; 
 enum day {sun=1,mon,tue,wed,thu,fri,sat}; 
 //These are constants 
 day d2 = fri; 
 //by default the value will assigned 0 to the first element so "fri = 5"
 // if we assigned the value one to the first element in enum data type then it
 // will follow the sequence from there only.
 // *************************************
 // now th value has been changed so as said it will follow the sequence 
 //therefore "fri" have value 6
 
 cout<<d2<<endl;
 
}
```

### Type Def data type
`typedef` is a custom data type name, it is used for only better readability of programs.

```cpp
 #include<iostream>
 using namespace std;
 int main(){
       
  typedef int roll_no;
  typedef int marks; // These are for storing marks 
  typedef int age;  //These are example of storing age
  // now if want to declare a variable of type int 
  // just user roll_no,no need to use "int"
  // in this case we are going  to stor rollno 
  // of the students
  //************* for example**************
  roll_no r1 = 50;
  roll_no r2 = 90;
  roll_no r3 = 65;
  cout<<r1<<endl;
  cout<<r2<<endl;
  cout<<r3<<endl;
        
  // The purpose of typedef is for readeabilty of the program only
    
  return 0;
 }
```
### Short Circuit Evaluation
 In short circuit when the statement itself is sufficient for true condition

 Then it will never look at second statement.

 Short circuit is supported in almost every programming languages

 In `||` the short circuit happen when it occurs **True** condition in first statement.

 Example
```cpp
#include<iostream>
using namespace std;
int main(){
// short circuit program using or operator
int a,b,i;
a = 10;
b = 5;
i = 5;
if(a < b || ++i <= b){
cout<<i<<endl;
}
cout<<i<<endl;
return 0;
}
```
 In && the short circuit happen when it occurs **False** condition in first statement.

 Example

 ```cpp
#include<iostream>
using namespace std;
int main(){
// example of short circuit evaluation
int a,b,i;
a = 10;
b = 5;
i = 5;
if(a < b && ++i <= b){
   cout<<i<<endl;
}
cout<<i<<endl;
return 0;
```
## Loops

### For loop
 for loop also known as counter control loop.

 Syntax of for loop
```cpp
 for(initalization;conditon;updation/increment/decrement){
 //Instruction to execute
 }
```
Program using loop
```cpp
//For loop program 
 #include<iostream>
 using namespace std;
 int main(){
 int ,i=0,n;
 for(i=0;i<=n;i++){
 cout>>i>>endl;
 }
return 0;
}
   
```
### Infinite for loop
```cpp
 //Infinite for loop
 #include<iostream>
 using namespace std;
 int main(){
 int i=0,n;
 for(;;){
 cout>>i>>endl;
}
return 0;
}
```
### while loop

```cpp
//while loop syntax in c++
while(condition){
//instruction to process
// increment or decrement
}

```
Program using while loop
```cpp
#include<iostream>
using namespace std;
int main(){
int i=1,n;
cout<<"Enter a number:";
cin>>n;
while(i<=n){
cout<<i<<endl;
i++;
}
return 0;
}
```

### do while loop
do while loop execute at least one time, whether the condition True or false.

```c++    
do{
 //Instruction to process
}while(condition)
 ```

```cpp
#include<iostream>
using namespace std;
int main(){
int n,i=1;
cout<<"Enter a number:";
cin>>n;
do{
cout<<i<<endl;
i++;
}while(i<n);
return 0;
}
 ```

## Memory Allocation
There are two ways of memory allocation.

Dynamic

Static
#### Dynamic Memory Allocation  
It helps us efficiently use of memory.
It reduces the wastage of memory


## Arrays
Array is a collection of element of same datatype and stored in  memory at contiguous location.

### Declaration of array.

```cpp
#include<iostream>
using namespace std;
int main(){
// initialization of array
int a[10];
for(int i=0;i<10;i++)
 cout<<a[i]<<endl;
}
//The above program will give output but the output will be a garbage value
//A garbage value is useless value 
//when we declare a variable but not asssigna a value to the variable then it take garbage value 
//which is present on that particular location  
```
### Initialization and Declaration of array.

```cpp
#include<iostream>
using namespace std;
int main(){
    // initialization of array
    int a[10]={2,4,5,6,10,8,9};
    //Assigning value to the arrays
    for(int i=0;i<10;i++)
     cout<<a[i]<<" ";
     
}
//The above program will print all the values
//But there is a catch we have array of size 10 but we assigned only 7 values to the array and
//the rest are the get default value of 0 automatically
//The above program have following output
2 4 5 6 10 8 9 0 0 0
```

### Exceeding the size of array

```cpp
#include<iostream>
using namespace std;
int main(){
// initialization of array
int a[10]={2,4,5,6,10,8,9,6,7,1,4};
//Assigning value to the arrays
for(int i=0;i<10;i++)
cout<<a[i]<<endl;
}
//The above program will give compile time error because we have assigned more values then the size of the 
//array can hold.
```

### Array without size

```cpp
#include<iostream>
using namespace std;
int main(){
// initialization of array
int a[]={2,4,5,6,10,8,9};
//Assigning value to the arrays
for(int i=0;i<10;i++)
cout<<a[i]<<" ";
}
//The above program will print all the values
//except when it finishes printing all values from the array then compiler assign garbage value to
//counter variable,here counter variable is i
//The above program have following output
2 4 5 6 10 8 9
//now garbage value will be printed
456665
-45456565
0
```

### For each loop

for-each loop introduced in `c++ version 11`.  

for-each loop used with collection of elements and collection of elements is nothing but an array.

``NOTE: When we use for-each loop with array it will not use index of the array to find the element and print, rather it checks whether the an element is present in collections or not.``

#### Example
```cpp
#include<iostream>
using namespace std;
int main(){
// initialization of array
int a[10]={2,4,5,6,10,8,9};
//Assigning value to the arrays
//working of for-each loop
//The first value of array will be copied in x like this x = 2
// x = 2
// then it check for x in a,here x is 2 so 2 is present in a so it will print
for(int x:a) //read as for each x in a,where x is an element in array a[10]
cout<<x<<endl;
}
```

### Advantages of for-each loop over for loop?

for each loop not need to know the size of the array, while for loop need the size of the array to iterate through the elements.

Accessing arrays using for loop saves time.
### Another example of for each loop

```cpp
#include<iostream>
using namespace std;
int main(){
// initialization of array
int a[10]={2,4,5,6,10,8,9};
//Assigning value to the arrays
for(int x:a) //read as for each x in a,where x is an element in array a[10]
cout<<++x<<endl; //here the output will be different because we used pre-increment operator
// because x having value 2 pre-increment make it 3,but rememeber it will 
// not affect the original value because as we know x is just a copy of
// element in a so in order to modify the actual value of array we need to
//use the reference in c++ and it is denoted with &(ampersand).
for(int &x:a) //read as for each x in a,where x is an element in array a[10]
 cout<<++x<<endl; //Now this will modify the actual value of the array.                                            
}
```

```cpp
#include<iostream>
using namespace std;
int main(){
// initialization of array
int a[10]={2,4,5,6,10,8,9};
//Assigning value to the arrays
for(int x:a) //read as for each x in a,where x is an element in array a[10]
 cout<<x<<endl;
}
// The above program will print all the values
// The above program uses foreach loop
// The above program have following output
// 2
// 4
// 5
// 6
// 10
// 8
// 9
// 0
// 0
// 0
```

### Types of arrays element

```cpp
#include<iostream>
using namespace std;
int main(){
// initialization of array
int a[10]={2,4,5,6,10,8,9}; //integer type of array

float b[3] = {2.5f,0.25f,9.36f}; //float type of array

char c[3] = {'x','p','u'}; //char  type of array
// printing arrays
for(int x:a)
  cout<<x<<endl;
//for second array
for(int x:b)
  cout<<x<<endl; //it will print only integer values and truncate the decimal part
for(float x:b)
  cout<<x<<endl; //it will print values with decimal part
 //for third array
for(int x:c)
  cout<<x<<endl;
}
```

### The auto keyword in c ++

```cpp
#include<iostream>
using namespace std;
int main(){
// initialization of array
int a[10]={2,4,5,6,10,8,9}; //integer type of array

float b[3] = {2.5f,0.25f,9.36f}; //float type of array

char c[3] = {'x','p','u'}; //char  type of array
//printing arrays
 for(int x:a)
   cout<<x<<endl;
//for second array
 for(auto x:b) //Using Auto keyword
   cout<<x<<endl; //it will print only integer values and truncate the decimal part
 for(float x:b)
   cout<<x<<endl; //it will print values with decimal part

//for third array
 for(int x:c)
   cout<<x<<endl;
 
}
//Note:with "auto" keywords we don't have to worry about datatype of the array whether it is
//float or int or any other type of data,the auto keywords as name suggest will automatically
//detect the array and will print the values accordingly,The auto keyword is very powerful
```

### Example of auto keyword with char type array.

```cpp
#include<iostream>
using namespace std;
int main(){
//Example of autokeyword
 char c[] = {41,'a','b','c',73}; //char  type of array
     
for(auto x:c)
  cout<<x<<endl;     
}
//The output of the program will be
// ) 
// a
// b
// c
// I

//Note:Those are the ASCII value of the char type element
```

Another example

```cpp
#include<iostream>
using namespace std;
int main(){
//Example of autokeyword
char c[] = {41,'a','b','c',73}; //char  type of array
    
for(int x:c)
  cout<<x<<endl;     
}
//The output of the program will be 
// 41
// 97
// 98
// 99
// 73

//Note:Those are the ASCII value of the char type element
```

## Structure

 Structure is used to store different type of data under a single variable.

 Structure is a user-defined data type.

 Using Structure and primitive data type more complex data type can be created.

 Example

```cpp
/* 
 Program to demonstrate the use of Structure
*/
    
#include<stdio.h>
struct Rectangle{
int length;
int breadth;
};
    
int main(){
// struct Rectangle r; // Declaration
struct Rectangle r = {10, 20}; // Declarations + Initialization
printf("%d ",r.length);
printf("%d ",r.breadth);
   
}
    
```

Structure does not occupy spaces in memory unless an variable is created.

struct Rectangle r; // syntax for creating structure variable or object

Once the structure variable is created it will consume the memory.
### Structure To Pointer

```cpp
/* 
Program to demonstrate the structure to pointer
*/

#include<stdio.h>
struct Rectangle{
int length;
int breadth;
};

int main(){
struct Rectangle r = {10, 20}; // Declarations + Initialization

struct Rectangle *p = &r; // Address of structure is stored in pointer

printf("Length = %d ",p->length);
printf("Breadth = %d ",p->breadth);

}
```
#### Point To Remember
When the variable of type structure is pointer then we use Arrow Operator.

To access and assign the value to the structure member.

Dynamic Memory allocation to structure member in Heap.

```cpp
/* 
Program to demonstrate the Dynamic Memory allocation to
Member of structure.
*/
    #include<stdio.h>
    #include<stdlib.h>
    struct Rectangle{
    int length;
    int breadth;
    };
    
    int main(){
    struct Rectangle *p; // Pointer
    p = (struct Rectangle *)malloc(4 * sizeof(struct Rectangle)); // Memory allocated dynamically and the pointer will point
    p->length = 30; // Assigning values to memeber of structure
    p->breadth = 50; // Assigning values to memeber of structure
    printf("Length = %d ",p->length);
    printf("Breadth = %d ",p->breadth);
    free(p); // Deallocate the space of Heap Area
    }
```
Point To Remember

When the variable of type structure is pointer then we use Arrow Operator.
To access and assign the value of the structure member.

## Functions
### Function Overloading
A function / method overloading is style of programming where a programmer
define several functions with same name but with different paramters

Note: the parameters and the data type of the parameters either of them should not match
with the previous function otherwise it will throw an error.
```cpp
#include<iostream>
using namespace std;
int max(int x,int y){
  return x+y;
}
int max(int x,int y,int z){
     return x+y+z;
}
int main(){
// Program to show the concept of function overloading in c++
int a = 10; int b = 30; int c = 20;
cout<<max(a,b)<<endl;
cout<<max(a,b,c)<<endl;
   
}
    

```

### Function template
The below program will be converted into function template.

```cpp
#include<iostream>
using namespace std;
int maximum(int x,int y){
  return x+y;
}
float maximum(float x,float y){
  return x+y;
}
int main(){
  // Program to show the concept of function template
 
  cout<<maximum(10,5)<<endl;
  cout<<maximum(10.5f,3.2f)<<endl;

}

```

Function template.

Function template reduce the unnecessary code.

Function template combined the above code in just single function.

example 

```cpp
  #include<iostream>
  using namespace std;
  template <class T>
  T maximum(T x,T y){
    return x+y;
  }
    
  int main(){
  // Program to show the concept of function template
     
  cout<<maximum(10,5)<<endl;
  cout<<maximum(10.5f,3.2f)<<endl;
  cout<<maximum(10.5,3.2)<<endl; // This double not float
    
  }
    
/* 
    
  A function templating possible only for those function which are
  overlaoded.
    
  Note: while dealing with function template both the argument given
  in function call must be same.
  cout<<max(10.5f,3)<<endl; // this will throw error as one argument 
  of type float and the other is of type integer, and we have not defined such function above where the function have two different data
  type arguments.
    
*/
```

### Function with default arguments

```cpp
#include<iostream>
using namespace std;
int add(int x, int y=0, int z=0){
      return x + y + z;
}
int main(){
// Program to show the concept of default argument.
cout<<add(10)<<endl;
cout<<add(10,5)<<endl;
cout<<add(10,5,4)<<endl;
    
}
    
/* 
Point to note that whenever we define function with default 
parameters.
we must do that from the right side only it is manadatory.
2. if we give argument to the function at the time of calling the
default argument get replaced with this one otherwise it will
take the default.
*/
```

### Function pass by value

```cpp
#include<iostream>
using namespace std;
int multiply(int x, int y){
return x * y;
}
int main(){
// program to show the concept of pass by value
int a = 10; int b = 5;
cout<<multiply(10,5)<<endl;
return 0;
}
/*
1. In function pass by value the simply the actual 
parameters/argument values are copied into the formal parameters 
varible.
2. Pass by value function only helpful when the function need to
perform some task and returns a value.
*/
```

### Function pass by reference

```cpp
#include<iostream>
using namespace std;
int swap(int &a,int &b){
int temp;
temp = a;
a = b;
b = temp;
return 0;
}
int main(){
// Program to show the concept of call by reference
int x = 10; int y = 20;
swap(x,y);
cout<<x<<" "<<y<<endl;
return 0;
}
/* 
    
.A call by refrence works exactly the same as call by value does.
2.It is also able to change the value of a variable inside other function.
   
3.The way reference function works is that it will not call the function
instead of calling function it copied all the instruction from where it has 
been called/invoked, that is main function oviously.
    
4.we should try to avoid writing any complex logic while dealing with
function call by refrence even if it is a single parameter function.
    
Note: when we call function call by refrence the function automatically
becomes the inline function.
    
*/
```

### Function pass by address

```cpp
#include<iostream>
using namespace std;
int swap(int *a,int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
 return 0;
}
int main(){
  // Program to demonstrate the concept of function call by address
  int x = 10; int y = 20;
  swap(x,y);
  cout<<x<<" "<<y<<endl;
  return 0;
}
/*
1. directly It is not possible to change the value of a variable inside the function from other function but it can be done through pointer.
2. A pointer is a very powerful concept.
    
*/
```

### Function return by address

```cpp
#include<iostream>
using namespace std;
int  * fun(){
int x = 10;
  //return &x; 
/* 
we can not return the address of local variable
because once the function execution finished it will get deleted
automatically.
*/
  
  int *p = new int[5];
  for(int i = 0; i<5; i++){
    p[i] = 5 * i;
  }
  return p;
}
int main(){
  // Program to demonstrate the function return address
  // function can also return addresses
  int *q = fun();
  for(int i=0; i<5; i++){
    cout<<q[i]<<endl;
  }
}

/*
1.We can return addresses only the variable or function that has 
Memory allocated in heap.
2.Heap memory is global to the function which can be accessed from
any where inside the program.
*/
```

### Function return by reference

```cpp
    #include<iostream>
    using namespace std;
    int & fun(int &x){
     return x;     
    }
    int main(){
      // Program to demonstrate the function return by refrence
      int a = 10;
      fun(a) = 25; // Now here the entire function fun() will be copied here.
      cout<<a<<endl;
    }
 ```

## Global and Local variables
* Global variables are always get allocated inside code section.
* Global variable can be accessed from any where in the program.
* Global variable available as long as the program running.
* Local Variables are allocated inside the stack area.
* Once the function execution finished local variables get deleted automatically.
* Local variables can be accessed inside the functions only.
* Example of local variable

```cpp
    
```

## String

```cpp
#include<iostream>
using namespace std;
int main(){
  // Demonstration of string program
  char s[10] = "Hello";
  cout<<s<<endl;
  return 0;
}
// The above progaram will also work if we don't mention the size in
// char s[] = "hello"

```

###  Program demonstrating the use of Null character

```cpp
#include<iostream>
using namespace std;
int main(){
  // Demonstration of string program
  char s[10] = {'h','e','l','l','o','\0','p','q'};
  cout<<s<<endl;
  return 0;
}
// The above program will give out 'hello' because we have put '\0' null character which indicates the end of string.
```

###  Program Demonstrating the use of ASCII character

```cpp
#include<iostream>
using namespace std;
int main(){
  // Program demonstrating the use of ASCII character
  char s[10] = {65,66,67,68,69,0,70};
  cout<<s<<endl;
  return 0;
}
// The output of the above program will 'be ABCDE' it will not print
// character after that because 0 indicates the null character
// either we can put 0 or null charcter.
```

## Pointer
A pointer is a variable that is used to store the address of another variable.

There are two type of variable
 * variable
 * Address Variable

Example of pointer through Program.

```cpp
include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p; //pointer Declaration or pointer of type integer
    p = &x; //initialization of pointer

    // Printing all the values
    cout<<"The Actual value that is stored in X: "<<x<<endl;
    cout<<"The Address of the variable X itself: "<<&x<<endl;
    cout<<"Address of the variable X via a pointer : "<<p<<endl;
    cout<<"The address of the pointer itself : "<<&p<<endl;
    cout<<"The actual value that is stored in pointer : "<<*p<<endl; //This is called Derefrencing of pointer

    return 0;
}
```

### Static Memory Allocation for array

```cpp
    #include<iostream>
    using namespace std;
    int main(){
        int size;
        cout<<"Enter number of elements:";
        cin>>size;
        int a[size]; //The size of the memeory will be created whatever size the
        //user will provide
        cout<<"This is the size of memory in bytes: "<<sizeof a<<endl;
        /*
    return 0;
    }
```

```cpp
#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter number of elements:";
cin>>size;
int a[size]; //The size of the memeory will be created whatever size the
//user will provide
cout<<"This is the size of memory in bytes: "<<sizeof a<<endl;
/*
    /*
    Now again if we want to increase the size of the array
    Then we can not follow the above approach again to increase the size
    of the array
    for example
    we can not do the below mention code once again
    */
     cout<<"Enter number of elements:";
     cin>>size;
     int a[size];
/*
The above code will not create new with another size because the array already created
so it will not create new one
      
Remember: once a array created of any size in the program it can not
Modified in any circumstances.
*/
return 0;
}
```

### Dynamic Memory Allocation for array.

If we want to increase or decrease the size of the array
dynamically Then we must follow the below method

```cpp
/*
 Dynamic memory allocation for array in c++
*/
    
#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter number of elements:";
cin>>size;
int *p = new int[size]; //The size of the memeory will be created whatever size the
//user will provide
cout<<"This is the size of memory in bytes: "<<sizeof a<<endl;

/*
The above-mentioned code will create the array,size will be given by the user
But before giving or creating array of new size for the array we must delete
the Previous array memory otherwise it will be waste of memeory
*/
delete []p; // Delete the memory before creating another memory
/*
 Now if we want to create same array with new size then we have to just give the size
 and array will be created
*/
    cout<<"Enter number of elements:";
cin>>size;
p = new int[size];

/*
The most important thing to remember is whenver we change the size of the array,actully
the size of the array never change instead it will create an an array of this new size 
and now the pointer will start to point this newly created array,Therefore it is necessary
to delete the memory that is allocated for previous array size otherwise it will cause 
memory leakage which is not good for our project.
*/

return 0;
    
}
```


## Storage Class
## Intro To OOPS
Four pillars of object-oriented programming.
 * Abstraction

 * Encapsulation (Data hiding)

 * Inheritance

 * Polymorphism
### Class
- By default the variable of a class are 'private' in order to make
  them accessible from outside the class they must be declared under the
  Access specifier `public`.
- Example of class

```cpp
#include<iostream>
using namespace std;
class Rectangle{
  // Data members or variable
  public:
  int length;
  int breadth;
  /* Methods */
  int area(){
    return length * breadth;
  }
  int perimeter(){
    return 2*(length+breadth);
  }
};

int main(){
  // program to demonstrate the use of class
  // creating object
  Rectangle r1,r2;
  r1.length = 10;
  r1.breadth = 20;
  cout<<"The are of rectangle "<<r1.area()<<endl;
  cout<<"The perimeter of rectangle "<<r1.perimeter()<<endl;
  return 0;
}
```
#### Points to remember
Class never takes memory as it is logical copy/ blue-print.

When we create instance of a class that is object then only it occupies
space in the memory.

Only variables/data member of the class takes space into memory.

Method of the class never takes memory space into the memory.

### Creating pointer to object

```cpp
#include<iostream>
using namespace std;
// Rectangle class
class Rectangle{
  
  public:
  int length;
  int breadth;
  /* Methods */
  int area(){
    return length * breadth;
  }
  int perimeter(){
    return 2*(length+breadth);
  }
};
int main(){
// Program to show the concepts of pointer to objects
Rectangle r1;
Rectangle *p; // pointer of type rectangle.
p = &r1; // p stores the address of object/instance of Rectangle class 'r1'
p->length = 10;
p->breadth = 10;
cout<<p->area()<<endl;
cout<<p->perimeter()<<endl;
return 0; 
}

```
In pointer to object:
* `->` arrow operator to access and assign the value of class members/method,
* rather then (.)dot operator.
* It is also known as de-referencing operator.
* The pointer variable also created in stack section.
* some examples
    * Rectangle *p; => create object in stack.
    * Rectangle *q = new Rectangle(); => create objects in 'heap memory'.

### Creating object to pointer inside the heap memory.

```cpp
#include<iostream>
using namespace std;
class Rectangle{

  public:
  int length;
  int breadth;
  /* Methods */
  int area(){
    return length * breadth;
  }
  int perimeter(){
    return 2*(length+breadth);
  }
};

int main(){
  // program to demonstrate the use of class
  // creating object
  Rectangle *ptr = new Rectangle(); // breacket is not manadatory but still we have used
  ptr->length = 10;
  ptr->breadth = 10;
  cout<<"The are of rectangle "<<ptr->area()<<endl;
  cout<<"The perimeter of rectangle "<<ptr->perimeter()<<endl;
  return 0;
}
```

### Encapsulation
* Data hiding is important because it is a way to avoid errors at first place.
* Sometimes data hiding is also important so the user may not ran into trouble while
* using the software/applications.
* That’s all the principle behind data hiding. as name suggest it is only for protecting the data, so it can be used without any errors.
* In technical terms data hiding is also known as Encapsulation.
* Example of Data hiding using `private access specifier`

```cpp
  #include<iostream>
  using namespace std;
  class Rectangle{
    private:
    int length; // because length and breadth declared under private access specifer we can not access it directly from the main function,that is outside of the class.
    int breadth;
    public:
    void setLength(int l){
      if(l>=0){
        length = l;
      }else{
        length = 0;
      }
      // these methods also known as accessor
    }
    void setBreadth(int b){
      if(b>=0){
        breadth = b;
      }else{
        breadth = 0;
      }
      // these methods also known as accessor
    }
    int getLength(){
      return length;
      // This method also known as mutator
    }
    int getBreadth(){
      return breadth;
      // This method also known as mutator
    }
    /* Methods */
    int area(){
      return length * breadth;
    }
    int perimeter(){
      return 2*(length+breadth);
    }
  };
  int main(){
  // Program to demonstrate the concepts of data hiding.
  Rectangle r1;
  // r1.length = 10; // here if we try to access the variable of a class directly it will throw error because now they are private member.
  // r1.breadth = 20; // here if we try to access the variable of a class directly it will throw error because now they are private member.
    
  r1.setLength(10);
  r1.setBreadth(15);
  cout<<"Area: "<<r1.area()<<endl;
  cout<<"Perimeter: "<<r1.perimeter()<<endl;
  cout<<"Length: "<<r1.getLength()<<endl;
  cout<<"Breadth: "<<r1.getBreadth()<<endl;
    
  return 0;
  }
```
### Accessor and Mutator
* The method which used for setting/assign the values of variable inside the
class is also known as 'accessor'
* The method which used for getting/retrive the values of variable inside the
class is also known as 'mutator'.

### Constructor
A constructor automatically gets called when instance of a class is created.

In `c++` a constructor have same name as class name.

### Type of constructor

 Default constructor

 Non-Parameterized constructor

 Parameterized constructor

 copy constructor

  Example constructor

  ```cpp
  // Default constructor
  #include<iostream>
  using namespace std;
  class Rectangle{
  
  private:
  
  int length; 
  int breadth;
  
  public:
  /*__________creating our own constructor/ user-defined-constructor_________ */
  Rectangle(){
    // Note:A constructor must not have any return type i.e a constructor never returns a value
    // A constructor must have same name as class name it is manadatory in c++
    length=1;
    breadth=1;
    // One more thing to be note that when the user-defined-constructor will be present
    // then the default constructor will be ignored by the compiler that means
    // Default constructor will not be invoked rather the user-defined-constructor will be invoked
    //
  }
    
  /* _______________Parameterized constructor_______________*/
  Rectangle(int l,int b){
  // In parameter constructor it is a chance that user may or may not provide negative value
  // so we will call the our own method tht is setLength() and setBreadth() to set the value of length
  // and breadth.
  setLength(l);
  setBreadth(b);
  }
  
  /* __________________________Copy constructor_______________ */
  Rectangle(Rectangle &rect){
   length = rect.length;
   breadth = rect.breadth; 
  }
  
  void setLength(int l){
  
    if(l>=0){
      length = l;
    }else{
      length = 0;
    }
    // This methods also known as accessor
  }
  
  void setBreadth(int b){
    if(b>=0){
      breadth = b;
    }else{
      breadth = 0;
    }
    // This methods also known as accessor
  }
  
  int getLength(){
    return length;
    // This method also known as mutator
  }
  
  int getBreadth(){
    return breadth;
    // This method also known as mutator
  }
  
  /* Methods */
  int area(){
    return length * breadth;
  }
  
  int perimeter(){
    return 2*(length+breadth);
  }
  
  };
  
  int main(){
  // Program to demonstrate the concepts of data hiding.
  // Rectangle r1; // object for default constructor
  Rectangle r1(10,5); // when we have parameterized constructor we need to pass the argument/parameters
  // like this 'Rectanlge r1(arg1,arg2..)'
  Rectangle r2(r1); // here we have passed the object r1
  // cout<<"Area: "<<r1.area()<<endl;
  // If we call the area() method we will get an value : 0
  // The value 0 is set by the default constructor provided by the compiler
  
  // After providing user-defined-constructor and having set the values of length and bredth to 1;
  // Now if we call the area() method we will get length*bredth = 1*1 = 1
  cout<<"Area: "<<r1.area()<<endl;
  cout<<"Area: "<<r1.area()<<endl;
  return 0;
  }
  
  /* 
  
  */
  ```

  Let’s combine the default constructor and parameterized constructor

  ```cpp
  #include<iostream>
  using namespace std;
  class Rectangle{
  
  private:
  
  int length; 
  int breadth;
  
  public:
  /*__________creating our own constructor/ user-defined-constructor_________ */
  Rectangle(){
    // Note:A constructor must not have any return type i.e a constructor never returns a value
    // A constructor must have same name as class name it is manadatory in c++
    length=1;
    breadth=1;
    // One more thing to be note that when the user-defined-constructor will be present
    // then the default constructor will be ignored by the compiler that means
    // Default constructor will not be invoked rather the user-defined-constructor will be invoked
    //
  }
    
  /* _______________Parameterized constructor_______________*/
  Rectangle(int l=1,int b=1){
  // In parameter constructor it is a chance that user may or may not provide negative value
  // so we will call the our own method tht is setLength() and setBreadth() to set the value of length
  // and breadth.
    // Note that we have also passed the default argument,so now we don't need the 
  // non-parameterized constructor,by doing so we can reduce the code.
  setLength(l);
  setBreadth(b);
  }
  
  /* __________________________Copy constructor_______________ */
  Rectangle(Rectangle &rect){
   length = rect.length;
   breadth = rect.breadth; 
  }
  
  void setLength(int l){
  
    if(l>=0){
      length = l;
    }else{
      length = 0;
    }
    // This methods also known as accessor
  }
  
  void setBreadth(int b){
    if(b>=0){
      breadth = b;
    }else{
      breadth = 0;
    }
    // This methods also known as accessor
  }
  
  int getLength(){
    return length;
    // This method also known as mutator
  }
  
  int getBreadth(){
    return breadth;
    // This method also known as mutator
  }
  
  /* Methods */
  int area(){
    return length * breadth;
  }
  
  int perimeter(){
    return 2*(length+breadth);
  }
  
  };
  
  int main(){
  // Program to demonstrate the concepts of data hiding.
  // Rectangle r1; // object for default constructor
  Rectangle r1(10,5); // when we have parameterized constructor we need to pass the argument/parameters
  // like this 'Rectanlge r1(arg1,arg2..)'
  Rectangle r2(r1); // here we have passed the object r1
  // cout<<"Area: "<<r1.area()<<endl;
  // If we call the area() method we will get an value : 0
  // The value 0 is set by the default constructor provided by the compiler
  
  // After providing user-defined-constructor and having set the values of length and bredth to 1;
  // Now if we call the area() method we will get length*bredth = 1*1 = 1
  cout<<"Area: "<<r1.area()<<endl;
  cout<<"Area: "<<r1.area()<<endl;
  return 0;
  }
  
  /* 
  
  */
  ```

### Types of function available in a class

```cpp
/* This is notes */
class Rectangle{

private:
int length;
int breadth;
public:
Rectangle() // default constructor prototype
Rectangle(int l,int b) // parametrized constructor prototype
Rectangle(Rectangle &rect) // copy constructor

//Mutator method/function
void setLength(int l);
void setBreadth(int b);

//setter/accessor method
int getLength();
int getBreadth();

// facilitator method/function
int area();
int perimeter();

//insepector method/function
bool isSquare(); // The work of inspector function is to check whether a valid value
// or parameter that a function supposed to have, given accordingly or not.

~Rectangle() // De-constructor
}
/*
generally prototype of the function is defined inside the class and the actual function has been defined outside the class using the scope resulution operator. by doing so we can
improve the readablitly of the program.

The above mentioned all the function must have in a class in order to be perfect class,
whether we need them or not.

*/
```

### Scope resolution operator
When the function defined inside the class itself then the method/function is     known as inline method/function.

Inline method/function should not have any complex logic they must be as simple as possible.

if We have complex logic in method/function then we must define it outside  the class using Scope resolution operator.

 ```cpp
    
  #include<iostream>
  using namespace std;
  class Rectangle{
    
    private:
    
    int length; 
    int breadth;
    
    public:
    /*__________creating our own constructor/ user-defined-constructor_________ */
      
    //Rectangle(){
      // Note:A constructor must not have any return type i.e a constructor never returns a value
      // A constructor must have same name as class name it is manadatory in c++
      //length=1;
      //breadth=1;
      // One more thing to be note that when the user-defined-constructor will be present
      // then the default constructor will be ignored by the compiler that means
      // Default constructor will not be invoked rather the user-defined-constructor will be 
      // invoked
    //}
    
    /* _______________Parameterized constructor_______________*/
    Rectangle(int l=1,int b=1){
    // In parameter constructor it is a chance that user may or may not provide negative value
    // so we will call the our own method tht is setLength() and setBreadth() to set the value of length
    // and breadth.
    setLength(l);
    setBreadth(b);
    }
    
    /* __________________________Copy constructor_______________ */
    Rectangle(Rectangle &rect){
     length = rect.length;
     breadth = rect.breadth; 
    }
    
    void setLength(int l){
    
      if(l>=0){
        length = l;
      }else{
        length = 0;
      }
      // This methods also known as accessor
    }
    
    void setBreadth(int b){
      if(b>=0){
        breadth = b;
      }else{
        breadth = 0;
      }
      // This methods also known as accessor
    }
    
    int getLength(){
      return length;
      // This method also known as mutator
    }
    
    int getBreadth(){
      return breadth;
      // This method also known as mutator
    }
    
    /* Methods */
    int area(){
      return length * breadth;
    }
    
    int perimeter(); // prototype, we will define this function outside the class using scope
  //resolution opeator
    
  //syntax of sope resolution class
  //return type <name_of_class> :: <function_name>
    
  };
  int Rectangle::perimeter(){
   //This is scope resolution function
   return 2*(length+breadth);
     
  }
  int main(){
  // Program to demonstrate the concepts of data hiding.
  // Rectangle r1; // object for default constructor.
  // Rectangle r1(10,5); // when we have parameterized constructor we need to pass the 
  // argument/parameters like this 'Rectanlge r1(arg1,arg2..)'
  Rectangle r1;  // this will work for constructor without any parameter that is default
  Rectangle r2(r1); // here we have passed the object r1
  // cout<<"Area: "<<r1.area()<<endl;
  // If we call the area() method we will get an value : 0
  // The value 0 is set by the default constructor provided by the compiler
    
  // After providing user-defined-constructor and having set the values of length and bredth 
  // to 1;
  // Now if we call the area() method we will get length*bredth = 1*1 = 1
    
  cout<<"Area: "<<r1.area()<<endl;
    
  return 0;
  }
    
  /* 
  We can also pass the default argument to the parameterized construtor so 
  that we don't need the non-parameterized constructor because these works for 
  both,if the user will pass the argument then the constructor also works,and if he/she
  opt to not provide the any argument in this case the default argument provided to the
  constructor will works and still the same constructor will be called/invoked.
    
  // therfore we can comment out the default constructor/user-defined-constructor
  // which we have created.
    
  */
    
```

## Exception Handling

 Throwing integer type Exception

```cpp
  #include<iostream>
  using namespace std;
  int main(){
    int x = 10, y = 0, z;
    try{
      if(y==0)
          throw 1; // here we throw integer value it could be anything,it may be double,float,class etc
        z = x / y;
        cout<<"The result is: "<<z<<endl;    
    }
    catch(int e){
      // Since we have throw 1 and 1 is integer value that is why we have used int variable e in the catch block,whatever the excepition will be thrown that will be
      // copied into "e".
      cout<<"Divison with zero is not possible "<<e<<endl;
    }
    return 0;
  }
  
  // Note: we have throw 1. we can throw any value other than 1, 2, 5 and so on
```

Throwing double type Exception

```cpp
  #include<iostream>
  using namespace std;
  int main(){
    int x = 10, y = 0, z;
    try{
      if(y==0)
          throw 1.5; 
        z = x / y;
        cout<<"The result is: "<<z<<endl;    
    }
      
    catch(double e){
        
      cout<<"Divison with zero is not possible "<<e<<endl;
    }
    return 0;
  }
    
  ```

Throwing string type exception

```cpp
    #include<iostream>
    using namespace std;
    int main(){
      int x = 10, y = 0, z;
      try{
        if(y==0)
            throw string("Div by 0"); 
          z = x / y;
          cout<<"The result is: "<<z<<endl;    
      }
      
      catch(string e){
        cout<<"Divison with zero is not possible "<<e<<endl;
      } 
      
      
      return 0;
    }
```

Exception: Throwing class

```cpp
#include<iostream>
using namespace std;
class MyException:exception{

};
int division(int a,int b){
 if(b==0)
   throw MyException();
 return a / b; 
}
int main(){

  int x = 10, y = 0, z;
  try{ 
      z = division(x,y);
      cout<<"The result is: "<<z<<endl;    
  }
  
catch(MyException e){
       
cout<<"Divison with zero is not possible "<<endl;
}
return 0;
}
```

## C++ New Features
some new features of c++ have introduced in later version and those are given below.
### Ellipses
Ellipses are used to pass variable length arguement to the function.

```cpp
# include<iostream>
# include<cstdarg>
using namespace std;
    
/* program for ellipsis */
int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    int x;
    int s=0;
    for(int i=0;i<n;i++)
    {
        x=va_arg(list,int);
        s+=x;
    }
    return s;
}
int main()
{
cout<<sum(3,10,20,30)<<endl; // the very first element indicate that how many elmenets we are goin to pass,here is 3
cout<<sum(5,1,2,3,4,5)<<endl; // here 5 argument passed to the list
}

```

### Smart Pointers

* Pointers are used to allocate the memory in Heap area.
* While Dealing with dynamic memory one must deallocate the memory otherwise it will cause an memory leakage problems.
* While developing applications sometimes a developer forgot to deallocate the memory. To prevent such kind of accident the concept of smart pointer is used.

```cpp
#include<iostream>
class Rectangle {
int area();
int perimeter();
}
```

## Miscellaneous
### Arm strong number

When the sum of cube of a given number is equal to the given number

for example

$n = 153$

$1^3 + 5^3+3^3 = 153$

Program to find arm-strong number

### Perfect number

when sum of factor of a given number is equal to double the given number
example 
n = 8, 2 * n = 16
factor of n = 1,2,4,8 sum of n = 1 + 2 + 4 + 8 = 15
Here the given number is not a perfect number
example 2
n = 6, 2 * n = 12
factor of n = 1,2,3,6 sum of n = 1 + 2 + 3 + 6 = 12
Here the given number is perfect number

```
```
