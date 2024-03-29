# Programming using CPP and Datastructure

## What is a data structure?

Data Structure is -
A techninque to store elements so that they can be used efficiently and effectively.

## Recursion

* what is Recursion?

  * When a function call itself then it is called recursion.

  * Recursion is costly because it uses stack internally.

## Array

* Array stores element in memory at contigious location.

* If we are not sure whether there is space avilable to store further element then how we do so that is why we say that size of aray can not be increased.

* Once array is declared with the specified size then it can not be increased on decreased later.

* To Increase the size of array there is only option that is create a new array and transfer all the elements from previous array to this new array.

* Note: We must delete the unused dynamic memory otherwise it will cause memory leakage problem.

* Operations on Array
  * Append
    * insert element at the end only.
  * Insert
  * Insert Only at Sorted Position
  * Display
  * Delete
  * Avg
  * Sum
  * Get
  * Set Replaces the element
  * Min
  * Max
  * Search (Liner and Binary)
  * Concatenate
  * Merge
  * Set Opeations on Array(Union,Intersection,Difference)
  * Reverse
    * Array can be reverse using two methods  
      * Method 1: With using an Auxiliary array
      * Method 2: In this method, first element is swapped with the last element and second with second last and third with third last and so on.
  * Rotation
    * Copy first element to the end of the array and it will continue.
    * Flashing the content on the LED screen is one of the example.
  * Shifting (Left Shift and Right Shift)
    * In shifting we loose element of either side if we shift left the we loose left element and if we shift right then we loos right element.

|Operations on Array|Time Complexity|Space Complexity|
|:-|:-|:-|
|Append|O(1)|O(1)|
|Insert|O(n)|O(n)|
|Insert at sorted position|O(n)|O(n)|
|Delete|O(1)|
|Sum/Recursive|O(n)|O(1)/O(n)|
|Min|O(n)|
|Max|O(n)|
|Merge|O(m+n)|
|Union|O(n^2)|
|Intersection|O(n^2)|
|Difference||

## String

What is character set and ASCII codes?

* It is the set of code that are supported by various programming languages.
* we know that computer only support binary language then how a computer can understand
  characters.
* For every characters there is predefined number associated that is what we know as ASCII codes.
* Those Numbers are standard number and every electronics device must follow and those numbers are only meant for electronic device communication.

|ASCII Codes|Description|
|:-|:-|
|A-Z, 65-90|Upper Case alphabets|
|a-z, 97-122|Lower Case alphabets|
|0-9, 48-57|For Numerical value|
|Note:|Apart from above characters there are some special characters available for like (,),?,+,-,* and son on.|
|Note|There are total 128 ASCII characters that is from  0 - 127 ASCII characters are availble.To represent a single ASCII characters it take 7 bits.|

* Unicodes - are represented using 2 byte memory that is 16-bit.  
* Unicodes supports all the english, hindi, mathematics etc.
* For more info about unicode [visit](https://unicodes.org).  
* Example

```c++
/* Ways to store characters */
#include<iostream>
using namespace std;
int main(){
char A[5] = {'A','B','C',0,0}; /* Initialization + Declaration, In memory their ASCII values will be stored.
*/
char A[] = {'A','B','C'} // it will takes the size of the arra according to the number of elements in the array.

/*  Working with array of characters */

char name[10] = {'j','o','h','n',0,0,0,0,0,0}; // rest are initialized with zeroes.


/*  Working with string  */

char name[10] = {'j','o','h','n','\0',0,0,0,0,0}; // Now the array of characters became string.

char name[] = {'j','o','h','n','\0'};
char name[] = "john"; // string delimeter automatically will be added.
char *name = "john" // this one will be created in Heap even though we didn't initialized it with new or malloc.


/* Display a string */
printf("%s",name);

/* Reading string from the console */

scanf("%s",name); // this will store the name,for example if we type "John" from the console it will get stored as array of characters followed by a null character at the end. this method only stores the one word if we want to write multiple words or sentence we need to use gets() method.

char name[] = {'j','o','h','n','\0'};


/*

'\0' The NULL character is known by following name:

1. String Delimeter
2. End of the string
3. Null character
4. String terminator

*/

}
```

## Linked List

Why Linked List?

* Linked List is used to store any type of elements unlike arrays which stores element from same domain.

* Linked List is fast as compare to array.

* Flexible as compared to array.

* It can grow and shrink on demand.

Array Vs Linked List  
|Array | Linked List  
|:-|:-|
|Arrays have limited size. |Linked List can grow and shrink dynamically.|
|Array stores only same type of element.|Linked List can store any type of data.|
|Array is primitive datastructure.|Linked List is Derived.|
|Array is a linear datastructure.|Linked List is also a linear datastructure.|

|Operations on Linked List|Time Complexity|Space Complexity|
|:-|:-|:-|
|Append|O(n)|O(1)|
|Insert At the begining|O(1)|O(1)|
|Insert At the middle|O(1)|O(1)|
|Insert At the end|O(n)|O(1)|
|Display/Recursive|O(n)/O(n)|O(1)/O(n)|
|Delete first Node|O(1)|O(n)|
|Delete last Node|O(n)|O(1)|

## Matrices

What is Matrices?  

* A matrices is an array of some kind of elements.  
* Matrix used to represent statistical data.
* Matrix mostly used in the field of computer science to represent various type of data.

## Tree

* A tree is the collection of Nodes or Vertices and edges.
* If there are (N) nodes then there will be (N - 1) edges.
* Some terminologies related to tree.
  * Root
  * Parent
  * Child
  * Siblings
  * Descendants
  * Ancestors
  * Degree of a Node
  * Internal and External Node
  * Levels
  * Height
  * Forest  
* What is Binary Tree?
  * A Tree having atmost two children.

## Graph

* A graph G (V,E) is the set of vertices and edges.  
* There are various type of graph available, below are the some examples.  
  * Directed Graph
    * A directed graph is a graph that has some directions.
    * In directed graph edges are represented by arrows and they tells the directions.
  * Undirected Graph
    * An undirected graph is a graph that has no directions and the edges in undirected graph is simply represented by lines.
