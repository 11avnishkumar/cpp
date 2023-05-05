/*

Program to implement singley linked list

*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

/* Linked list representation */

struct Node{
    int data;
    struct Node *next; // self refrential structure or a pointer of type "struct Node".
}*first=NULL, *second=NULL, *third=NULL; // global pointer of type structure,Initialized with NULL


void Create(int A[],int n){
int i;
struct Node *t,*last;
first = (struct Node *)malloc(sizeof(struct Node));
first->data = A[0];
first->next=NULL;
last = first;
/* we have created very first Node Now rest of node is created using for loop */
for(i=1; i<n; i++){
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next=NULL;
    last->next = t;
    last=t;
}

}


/* Second Linked List */
void SecondLinkedCreate(int A[],int n){
int i;
struct Node *t,*last;
second = (struct Node *)malloc(sizeof(struct Node));
second->data = A[0];
second->next=NULL;
last = second;
/* we have created very first Node Now rest of node is created using for loop */
for(i=1; i<n; i++){
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next=NULL;
    last->next = t;
    last=t;
}
}

/* Display Linked List */
void Display(struct Node *p){
   while(p != NULL){
    printf("%d ",p->data);
    p = p->next;
   }
}


/* Recursive Display of linked list*/
void RDisplay(struct Node *p){
    if(p != NULL){
        printf("%d ",p->data);
        RDisplay(p->next);
    }
}

/* Display linkedlist in Reverse order */
void ReverseDisplay(struct Node *p){
    if(p != NULL){
        ReverseDisplay(p->next);
        printf("%d ",p->data);
    }
}



/* Counting Node of a Linked List */
int Count(struct Node *p){
    int c = 0;
    while(p != NULL){
        c++;
        p = p->next;
    }
    return c;
}


/* Recursive method for counting Node of Linked List */
int RCount(struct Node *p){
    if(p != NULL){
        return RCount(p->next) + 1;
    }
    return 0;
}

/* Sum of all the elements of a Linked List */
int Sum(struct Node *p){
    int s = 0;
    while(p != NULL){
        s = s + p->data;
        p = p->next;
    }
    return s;
}


/* Average of all the elements of a Linked List */
float Avg(struct Node *p){
    return (float)Sum(p)/Count(p);
}


/* Sum of all the elements of a linked list Using Recursion */

int RSum(struct Node *p){
    if(p != NULL){
    return RSum(p->next) + p->data;
    }
    return 0;
}

/* Max element of a linked list */
int Max(struct Node *p){
    int m = INT_MIN;
    while(p != NULL){
        if(p->data > m)
            m=p->data;
        p = p->next;
    }
    return m;
}
/* Min element of a linked list */
int Min(struct Node *p){
    int m = INT_MAX;
    while(p != NULL){
        if(p->data < m)
            m = p->data;
        p = p->next;
    }
    return m;
}

/* Recursive Method of finding the Max of all elements from the linked list */
int RMax(struct Node *p){
    int m = INT_MIN;
    if(p != NULL){
        m = RMax(p->next);
        return m > p->data ? m : p->data; // Ternary Condition
    }
    return m;
}


/* Recursive Method of finding the Min of all elements from the linked list */
int RMin(struct Node *p){
    int m = INT_MAX;
    if(p != NULL){
        m = RMin(p->next);
        return m < p->data ? m : p->data; // Ternary Condition
    }
    return m;
}


/*  Linear search in linked list */
struct Node * LSearch(struct Node *p, int key){
    while(p != NULL){
        if(key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}


/*  Recursive Linear search in linked list */
struct Node * RLSearch(struct Node *p, int key){
    if(p == NULL)
        return NULL;
    if(key == p->data)
        return p;
    return RLSearch(p->next,key);
}


/* Move To Head: Improving Linear Search */
struct Node * MoveToHeadSearch(struct Node *p, int key){
    struct Node *q = NULL;
    while(p != NULL){
        if(key == p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
            
        }
        else{
           q = p;
           p = p->next;
        }
}
}

/* Insert Element in a existing linked list*/
void Insert(struct Node *p,int index,int element){
    struct Node *t; int i;
    if(index < 0 || index > Count(p)){ // we have already created count() method.
        printf("Invalid Index!!!!!!");
        return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    if(index == 0){
        t->data = element;
        t->next = first;
        first = t;

    }else{
        p = first; // p start from 0
        for(i=0; i < index - 1 && p != NULL; i++){
            p = p->next;
        }
        if(p != NULL){
            t->data = element;
            t->next = p->next;
            p->next = t;
        }
    }
}


/* Inserting element at sorted Position */
void SortedInsert(struct Node *p, int element){
    struct Node *t,*q=NULL; // q will be NULL initially;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = element; // Node and data is ready
    t->next = NULL;
    if(first == NULL){
       first = t; // either we can use first(it is global) or p
    }else{

    while(p!= NULL && p->data < element){
        q = p;
        p = p->next;
    }
    // Handling special case in linked list
    if(p==first){
        t->next = first; // Insert left
        first = t;
    }else{
        t->next = q->next;
        q->next = t;   // Insert right
    }
 }
}


/* Delete elements from linked list */
int Delete(struct Node *p, int index){
    struct Node *q=NULL;
    int i,x; // i for counter, x for storing deleted elements
    //check, if the index is valid or Not
    if(index < 1 || index > Count(p)) // Node index start from 1 onwards.
        return -1;
    if(index == 1){
        q = first;
        x = first->data;
        first = first->next;
        free(q); // for delete we use free();
        return x;
    }else{
        for(i=0; i< index -1 && p !=NULL; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }    
}


/* Check whether the linked list is sorted or not */
int isSorted(struct Node *p){
    int x = INT_MIN;
    while(p != NULL){
        if(p->data < x)
            return 0;
        x = p->data;
        p = p->next;    
    }
    return 1; // return 1 if the linked list is sorted
}

/* Removing Duplicates from sorted linked list */
void RemoveDuplicate(struct Node *p){
struct Node *q = p->next;
while(q != NULL){
    if(p->data == q->data){
    p->next = q->next;
    free(q);
    q = p->next;
    }else{
    p = q;
    q = q->next;
    }
}
}

/* Reversing a Linked List using an Array */
void ReverseLinkedListUsingArray(struct Node *p){
int *A,i=0;struct Node *q=p;
A = (int *)malloc(sizeof(int)*Count(p));
while(q!=NULL){
    A[i] = q->data;
    q = q->next;
    i++;
}
q = p;
i--;
while(q!=NULL){
    q->data = A[i];
    q = q->next;
    i--;
}
}


/* Iterative: Reversing Linked List */
void ReverseLinkedList(struct Node *p){
    struct Node *q,*r;
    q = NULL;
    r = NULL;
    while(p!=NULL){
      r = q;
      q = p;
      p = p->next;
      q->next = r;  
    }
    first = q;
}


/* Recursive: Reversing Linked List */
void RReverseLinkedList(struct Node *q,struct Node *p){
    if(p!=NULL){
        RReverseLinkedList(p,p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

/* Concatination of two Linked List */
void Concatenate(struct Node *p,struct Node *q){
third = p;
 while(p->next!=NULL)
    p = p->next;
p->next = q;
q=NULL; 
    
}

/* Program for merging two Linked List */
void Merge(struct Node *p,struct Node *q){
struct Node *last;
if(p->data < q->data){
    third=last=p;
    p = p->next;
    last->next = NULL;
}else{
    third=last=q;
    q = q->next;
    last->next = NULL;
}
while(p!=NULL && q!=NULL){
   if(p->data < q->data)
   {
    last->next=p;
    last=p;
    p = p->next; 
    last->next = NULL;
   }else{
    last->next=q;
    last=q;
    q = q->next; 
    last->next = NULL;
   } 
}

if(p!=NULL)last->next = p;
else last->next = q;

}

/* Check whether there is loop in linked list or not */
int isLoop(struct Node *f){
    struct Node *p,*q;
    p=q=f;
    do{
        p = p->next;
        /* Below we are making q pointer to move faster then p pointer */
        q = q->next;
        q = q != NULL? q->next : NULL;
    }while(p!=NULL && q!=NULL && p!=q);

    return p==q? 1:0; // ternary
}

int main(){
    int ch;
    int index,element,returnedValue;
    struct Node *temp,*t,*t2; // to form a loop
    int A[] = {15,20,25,30,35,40,45,50}; // these array element work as input to linked list
    
    // int B[] = {80,90,100,105,110,120};

    /* creating a loop in linked list */
    // t=first->next->next; // pointing at element 25
    // t2=first->next->next->next->next->next->next->next; // pointing at 50, we can also do it usin while loop
    // t2->next = t; // forming a loop,because last element point at 25
    // printf("%d\n",isLoop(first));

    do{
        printf("\nChoose from the following\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Count\n");
        printf("4. Sum\n");
        printf("5. Average\n");
        printf("6. Min\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                Create(A,8);
                break;
            case 2:
                Display(first);
                break;
            case 3:
                printf("\nIterative : Number of Node is = %d ",Count(first));
                printf("\nRecursive : Number of Node is = %d ",RCount(first));
                break;
            case 4:
                printf("\nIterative : Sum of all element = %d ",Sum(first));
                printf("\nRecursive : Sum of all elements = %d ",RSum(first));
                break;
            case 5:
                printf("\nAverage of all element = %f ",Avg(first));
                break;
            case 6:
                printf("\nIterative : Min of all elements = %d ",Min(first));
                printf("\nRecursive : Min of all elements = %d ",RMin(first));
                break;
        }
    }while(ch < 7);



    // SecondLinkedCreate(B,6);
    // printf("\nSimple Display: ");
    // Display(first);

    // printf("\nDisplay Second: ");
    // Display(second);

    // printf("\nRecursive Display: ");
    // RDisplay(first);

    // printf("\nReverse Display: ");
    // ReverseDisplay(first);

    

    

    // printf("\nIterative : Max of all elements = %d ",Max(first));
    // printf("\nRecursive : Max of all elements = %d ",RMax(first));

    // printf("\nIterative : Linear Search = %d ",LSearch(first,15));
    // temp = LSearch(first,15); // address always stored in pointer.
    // temp !=NULL ? printf("\nAddress = %d and key = %d",temp,temp->data):printf("address = %d and data = %d",temp,temp->data); // Verification line for the output
    // printf("\nRecursive : Linear Search = %d ",RLSearch(first,15));
    // printf("\nImproved Linear Search = %d ",MoveToHeadSearch(first,55));
    // printf("\nDisplay: ");

    // Display(first);
    // Insert(first,8,55);
    // printf("\nDisplay: ");
    // Display(first);

    // printf("\nDisplay: before SortedInsert: ");
    // SortedInsert(first,10);
    

    // printf("\nDeleted = %d ",Delete(first,8));
    // printf("\nDisplay:After Deletion ");
    // Display(first);

    // printf("\nIs Linked List Sorted = %d",isSorted(first));

    // printf("\nRemoved Duplicate: ");
    // RemoveDuplicate(first);
    // Display(first);

    // Merge(first,second);
    // printf("\nDisplay:After Merging: ");
    // Display(third);

    // ReverseLinkedListUsingArray(first);
    // printf("\nDisplay:Reverse Linked List using Array: ");
    // Display(first);

    // ReverseLinkedList(first);
    // printf("\nDisplay:Iterative:After Reversing Linked List: ");
    // Display(first);

    // RReverseLinkedList(NULL,first);
    // printf("\nDisplay:Recursive:After Reverse of Linked List ");
    // Display(first);

    // Concatenate(first,second);
    // printf("\nDisplay After Concatination: ");
    // Display(third);
    
}


/*
    ************** Explanation ***************


    ******** Creation of Linked List **********
      
    1. Created pointer of type structure
       called 'first' and assigned it to NUll value.
    2. Then create a seprate node again filled it with data.
    3. Then link the node with previously created Node.
    4. Make the last Node point to Newly created Node.
    5. Repeat step 2 to 4.
    Note: Even we can do step 3 first and then go for step 4, this work same
          either link the node first and then fill the data or
          fill the data and then link the node.

    ************* Display Linked list ***********

    Linked list can be displayed by Two Method
    1. Iterative Method
        1.1 Iterative Method is more efficient.
        1.2 Time complexity O(n)
    2. Recursive Method
        2.1 Recursive method is less efficient.
        2.2 Using Recursive method linked list can also be
            displayed in Reverse order.
        2.3 Head Recursion Used to Display Linked List
        2.4 Tail Recursion Used to Display Linked List in Reverse Order. 
        2.5 Time complexity O(n);
        2.6 Space complexity O(n) as Recursion use stack.

    ************* Counting Node ************

    Two method for counting Node in a Linked List.
    1. Iterative Method
      1.1 Iterative method is more efficient in terms of Space
      1.2 Time Complexity is O(n).
      1.3 Space Complexity is O(1).
    2. Recursive Method
      2.1 Recursive method is costly in terms of space.
      2.2 Time complexit is O(n).
      2.3 Space complexity is O(n).

    ************ Sum of elements in a Linked list ***************

    There is two ways to find the sum of linked list.
    1. Iterative Method.
      1.1 Iterative method is efficient in terms of space.
      1.2 Time complexity is O(n).
      1.3 Space complexity is O(1).
    2. Recursive Method.
      2.1 Recursive method is costly in terms of space.
      2.2 Time complexity is O(n)
      2.3 Space complexity is O(n).

    ************ Find the Max/Min element in linked list ************

    There are two ways to find the Max elements
    1. Iterative Method
      1.1 It is more efficient in terms of space.
      1.2 Time complexity is O(n)
      1.2 Space complexity is O(1)
    2. Recursive Method
      2.1 It is costly in terms of space.
      2.2 Time complexity O(n).
      2.2 Space complexity O(n).

    ************ Searching **************

    Here we are using linear search, Binary search is not compatible with liked list.
    There is no way to reach the middle node randomly, therefore binary search is not possible.
    There are two ways of searching;
    1. Iterative 
      1.1 Iterative version is efficent in terms of space.
      1.2 Time complexity is O(n).
      1.3 Space complexity is O(1).
    2. Recursive
      2.1 Recursive Method is costly in terms of space.
      2.2 Time complexity is O(n).
      2.3 Space complexit is O(n).

    *********** Search Method **************

    There two search method
    1. Transposition
        1.1 Transposition method suitable for arrays only in Linked List we avoid it, it works on
            the principle of swapping, swapping data in case of liked list is very complex.
            so we only use move to head method. 
    2. Move to Head
        2.1 if the element found then the Node brought at the begining of the linked list
            so that when element get search next time then the time complexity get reduced 
            by O(1) constant time.
        2.2 Time complexity O(1).
        2.3 Note: if we want to see the value when move to Head return the address we need to take a
                pointer of type struct and store the address and the use arrow method as we did in case of linear search.   

    ***************** Inserting into linked list ***************

    1. Insertion into linked list can be of tree type.
        1.1 Before first Node.
        1.2 After first Node or any other Node.
        1.3 after last Node.            
        1.4 Time complexity of Insertion before first Node or after first Node
            takes O(1) constant time.
            while insertion after any other node or at the end of linked list takes
            O(n) time.
            Note: We can User insert() method to create entire linked list but one thing
                    keep in mind that we must give index 0 while creating the linke list because
                    rest of the other Node is going to insert after the first node or before the first Node
                    Therefore first Node creation is important.we don't need the create() method which we have made earlier.
                        
    **************** Insertion Only end of a Linked List ************

    1. Insertion into linked list at the end takes O(n) time we can reduce
       this time by just maintaining a last pointer which will point to only last
       Node by doing this time complexity will reduce from O(n) to O(1).

    **************** Insertion into sorted position (Handling special case) ****************

    1.Insertion at sorted position if it is first postition then
      Time complexity will be O(1) otherwise O(n).  

    **************** Deletion from a linked list ***************

    1. Time complexity O(1), if it is first element.
    2. Time complexity O(n), if it is other then first element.

    **************** Is Linked List Sorted *****************

    Time complexity O(1) or O(n).

    **************** Removing duplicates from sorted linked list ******************

    1. To find all the duplicate from the linked list it is must to traverse entire
    linked list therefore it takes time.
        1.1 Time Complexity O(n).
    *************** Reverse of a Linked List using an array ********
    1. Using an auxiliary array we can Reverse a linked list.
    2. Time complexity O(2n)

    *************** Reversing a Linked List ***************

    1. Linked List can be reversed in two ways:
        1.1 Iterative
            1.10 Iterative method is efficient in terms of space.
            1.11 Time Complexity O(n)
            1.12 Space complexity O(1)
        1.2 Recursive
            1.20 Recusive method is costly in terms of space
            1.22 Time complexity O(n)
            1.23 Space complexity O(n)

    ************** Concatinating Linked List *************

    1. Concatinating two linked list means taking either of the list from two
        given linked list and join them form a single linked list.
        1.1 Time Complexity O(n).

    ************* Merging a Linked List ****************

    1. Merging  is the process of combining two sorted Linked List
        Time complexity O(m+n)

    ************* Finding a Loop in a Linked List ***********

    1. Traverse the linked list if the pointer reaches at the end and having value NULL then
        Definitely there is no Loop in a linked list.


*/