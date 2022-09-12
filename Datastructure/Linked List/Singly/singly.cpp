/*
Singley Linked List
*/

#include<iostream>
using namespace std;

/* Linked list representation */

class Node{
    public:
    int data;
    Node *next;

};

class LinkedList{
    private:
    Node *first;
    public:
    LinkedList(){first=NULL;};
    LinkedList(int A[],int n);
    // ~LinkedList();
    void Insert(int index, int x);
    void SortedInsert(int element);
    void Display();
    void RDisplay();
    void ReverseDisplay();
    int Count();
    int isSorted();
    int RCount();
    int Sum();
    int RSum();
    float Avg();
    int Max();
    int RMax();
    int Min();
    int RMin();
    Node *LSearch(int key);
    Node *RLSearch(int key);
    Node *MoveToHeadSearch(int key);
    int Delete(int index);
    int isLoop();
    void RemoveDuplicate();
    int Length();
    void ReverseLinkedList();
    void RReverseLinkedList();
    void ReverseLinkedListUsingArray();

};

LinkedList::LinkedList(int A[],int n){
Node *t = first;
Node *last; 
t = new Node; // dynamic memeory allocation
t->data = A[0];
t->next = NULL;
first = t;
last = t;
for(int i=1; i<n; i++){
    t = new Node;
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
}

}


void LinkedList::Display(){
Node *p = first;
while(p != NULL){
    cout<<p->data<<endl;
    p = p->next;
   }
}


// /* Recursive Display of linked list*/
// void LinkedList::RDisplay(first){
//     Node *p = first;
//     if(p != NULL){
//         cout<<p->data<<endl;
//         RDisplay(p->next);
//     }
// }

// /* Display linkedlist in Reverse order */
// void LinkedList::ReverseDisplay(){
//     Node *p = first;
//     if(p != NULL){
//         ReverseDisplay(p->next);
//         cout<<p->data<<endl;
//     }
// }



/* Counting Node of a Linked List */

int LinkedList::Count(){
    Node *p = first;
    int c = 0;
    while(p != NULL){
        c++;
        p = p->next;
    }
    return c;
}


// /* Recursive method for counting Node of Linked List */
// int LinkedList::RCount(){
//     Node *p = first;
//     if(p != NULL){
//         return RCount(p->next) + 1;
//     }
//     return 0;
// }

/* Sum of all the elements of a Linked List */
int LinkedList::Sum(){
      Node* p = first;
    int s = 0;
    while(p != NULL){
        s = s + p->data;
        p = p->next;
    }
    return s;
}


/* Average of all the elements of a Linked List */
float LinkedList::Avg(){
    Node *p = first;
    return (float)Sum()/Count();
}


/* Sum of all the elements of a linked list Using Recursion */

// int LinkedList::RSum(Node *p=first){
//     if(p != NULL){
//     return RSum(p->next) + p->data;
//     }
//     return 0;
// }

/* Max element of a linked list */
int LinkedList::Max(){
    Node *p = first;
    int m = INT_MIN;
    while(p != NULL){
        if(p->data > m)
            m=p->data;
        p = p->next;
    }
    return m;
}

/* Min element of a linked list */

int LinkedList::Min(){
    Node *p = first;
    int m = INT_MAX;
    while(p != NULL){
        if(p->data < m)
            m = p->data;
        p = p->next;
    }
    return m;
}

/* Recursive Method of finding the Max of all elements from the linked list */
// int LinkedList::RMax(Node *p){
//     int m = INT_MIN;
//     if(p != NULL){
//         m = RMax(p->next);
//         return m > p->data ? m : p->data; // Ternary Condition
//     }
//     return m;
// }


/* Recursive Method of finding the Min of all elements from the linked list */
// int LinkedList::RMin(Node *p){
//     int m = INT_MAX;
//     if(p != NULL){
//         m = RMin(p->next);
//         return m < p->data ? m : p->data; // Ternary Condition
//     }
//     return m;
// }


/*  Linear search in linked list */
  Node* LinkedList::LSearch(int key){
    Node *p = first;
    while(p != NULL){
        if(key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}


/*  Recursive Linear search in linked list */
//   Node * RLSearch(Node *p, int key){
//     if(p == NULL)
//         return NULL;
//     if(key == p->data)
//         return p;
//     return RLSearch(p->next,key);
// }


/* Move To Head: Improving Linear Search */
  Node * LinkedList::MoveToHeadSearch(int key){
    Node *p = first;
    Node *q = NULL;
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
    // return p;
}

/* Insert Element in a existing linked list*/
void LinkedList::Insert(int index,int element){
    Node *p = first;
    Node *t; int i;
    if(index < 0 || index > Count()){ 
        printf("Invalid Index!!!!!!");
        return;
    }
    t = new Node;
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
void LinkedList::SortedInsert(int element){
    Node *p = first;
    Node *t,*q=NULL; // q will be NULL initially;
    t = new Node;
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
int LinkedList::Delete(int index){
    Node *p = first;
    Node *q=NULL;
    int i,x; // i for counter, x for storing deleted elements
    //check, if the index is valid or Not
    if(index < 1 || index > Count()) // Node index start from 1 onwards.
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
int LinkedList::isSorted(){
    Node *p = first;
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
void LinkedList::RemoveDuplicate(){
  Node *p = first;  
  Node *q = p->next;
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
void LinkedList::ReverseLinkedListUsingArray(){
Node *p = first;    
int *A,i=0;  Node *q=p;
A = new int[Count()];
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
void LinkedList::ReverseLinkedList(){
    Node *p = first;
    Node *q,*r;
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
// void LinkedList::RReverseLinkedList(Node *q,  Node *p){
//     if(p!=NULL){
//         RReverseLinkedList(p,p->next);
//         p->next = q;
//     }
//     else
//     {
//         first = q;
//     }
// }

/* Concatination of two Linked List */
// void Concatenate(Node *p,Node *q){
// third = p;
//  while(p->next!=NULL)
//     p = p->next;
// p->next = q;
// q=NULL; 
    
// }

/* Program for merging two Linked List */
// void Merge(Node *q){
//   Node *p = first;  
//   Node *last;
// if(p->data < q->data){
//     third=last=p;
//     p = p->next;
//     last->next = NULL;
// }else{
//     third=last=q;
//     q = q->next;
//     last->next = NULL;
// }
// while(p!=NULL && q!=NULL){
//    if(p->data < q->data)
//    {
//     last->next=p;
//     last=p;
//     p = p->next; 
//     last->next = NULL;
//    }else{
//     last->next=q;
//     last=q;
//     q = q->next; 
//     last->next = NULL;
//    } 
// }

// if(p!=NULL)last->next = p;
// else last->next = q;

// }

/* Check whether there is loop in linked list or not */

int LinkedList::isLoop(){
    Node *f = first;
    Node *p,*q;
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
    int returnedValue;
    int index,element;
    int A[] = {15,20,25,30,35,40,45,50}; // these array element work as input to linked list
    
    int B[] = {80,90,100,105,110,120};

    LinkedList l(A,8);
    
    // cout<<l->isLoop()<<endl;

    // SecondLinkedCreate(B,6);
    // printf("\nSimple Display: ");

    // cout<<"Display Second: "<<endl;
    // Display(second);

    // cout<<"Recursive Display: "<<endl;
    // RDisplay(first);

    // cout<<"Reverse Display: "<<endl;
    // ReverseDisplay(first);
    do{
        cout<<"Choose from the following"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Insert at sorted Position only"<<endl;
        cout<<"3. Count the Nodes"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Delete"<<endl;
        cout<<"6. Sum"<<endl;
        cout<<"7. Max"<<endl;
        cout<<"8. Min"<<endl;
        cin>>ch;
        cout<<"********************************"<<endl;
        switch (ch)
        {
        case 1:
            cout<<"Enter the index and the element respectively"<<endl;
            cin>>index>>element;
            l.Insert(index,element);
            break;
        case 2:
            cout<<"Enter the element"<<endl;
            cin>>element;
            l.SortedInsert(element);
            break;
        case 3:
            returnedValue = l.Count();
            cout<<"Number of Node is "<<returnedValue<<endl;
            break;
        case 4:
            l.Display();
            break;
        case 5:
            cout<<"Enter the element"<<endl;
            cin>>element;
            l.Delete(element);
            break;
        case 6:
            returnedValue = l.Sum();
            cout<<"Sum "<<returnedValue<<endl;
            break;
        case 7:
            returnedValue = l.Max();
            cout<<"Max "<<returnedValue<<endl;
            break;
        case 8:
            returnedValue = l.Min();
            cout<<"Min "<<returnedValue<<endl;
            break;            
        default:
            break;
        }
    }while(ch<9);
    // cout<<"Recursive : Number of Node is "<<RCount(first);

    // cout<<"Average of all element "<<Avg()<<endl;
    // cout<<"Recursive : Sum of all elements    "<<RSum(first);

    
    // cout<<"Recursive : Max of all elements "<<RMax(first);

    
    // cout<<"Recursive : Min of all elements "<<RMin(first);

    // cout<<"Iterative : Linear Search "<<l.LSearch(15)<<endl;
    // temp = LSearch(15); // address always stored in pointer.
    // temp !=NULL ? cout<<"\nAddress "<<temp<<and key "<<temp->data:cout<<"address   and data   "<<temp,temp->data); // Verification line for the output
    // cout<<"\nRecursive : Linear Search "<<RLSearch(first,15);
    // cout<<"Improved Linear Search "<<l.MoveToHeadSearch(50)<<endl;;
    

    // cout<<"Is Linked List Sorted "<<l->isSorted());

    // cout<<"Removed Duplicate: "<<endl;
    // l->RemoveDuplicate();
    // l->Display();

    // Merge(second);
    // cout<<"Display:After Merging: ");
    // Display(third);

    // ReverseLinkedListUsingArray();
    // cout<<"Display:Reverse Linked List using Array: ");
    // l->Display();

    // ReverseLinkedList();
    // cout<<"Display:Iterative:After Reversing Linked List: ");
    // Display();

    // RReverseLinkedList(NULL,first);
    // cout<<"\nDisplay:Recursive:After Reverse of Linked List ");
    // Display();

    // Concatenate(second);
    // cout<<"\nDisplay After Concatination: ");
    // Display(third);
    
}


/*
    
    ******** Creation of Linked List **********
      
    1. Created pointer of type struct Node
       called 'first' and assigned it to NUll value.
    2. Then create a seprate node again filled it with data.
    3. Then link the node with previously created Node.
    4. Make the last Node point to Newly created Node.
    5. Repeat step 2 to 4.
    Note: Even we can do step 3 first and then go for step 4, this work same
          either link the node first and then fill the data or
          fill the data and then link the node.

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
                pointer of type   and store the address and the use arrow method as we did in case of linear search.   

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
        given linked list and join them to form a single linked list.
        1.1 Time Complexity O(n).

    ************* Merging a Linked List ****************

    1. Merging  is the process of combining two sorted Linked List
        Time complexity O(m+n)

    ************* Finding a Loop in a Linked List ***********

    1. Traverse the linked list if the pointer reaches at the end and having value NULL then
        Definitely there is no Loop in a linked list.

*/