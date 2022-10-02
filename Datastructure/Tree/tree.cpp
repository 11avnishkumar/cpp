#include<iostream>
using namespace std; // need to include here so that it can be accessible here as well as in queue header file
#include "queue2.h"
#include "stack.h"

class Tree{
    public:
        Node* root;
    Tree(); // constructor
    void createTree(); // method for creating a tree
    /* Traversal */
    void Preorder(Node* p);
    void Inorder(Node* p);
    void Postorder(Node* p);
    void IterativePreorder(Node* p);
    void IterativeInorder(Node* p);
    void IterativePostorder(Node* p);
    // void LevelOrder(Node* p);
    // void Height(Node* root);
};
Tree::Tree(){root=NULL;}
void Tree::createTree(){
Node *p,*t; // Need to temporary Pointer
int element;
Queue q(100); // initialize the size of the queue;
cout<<"Enter the root value"<<endl;
cin>>element;
/* root Node with data */
root = new Node;
root->data = element;
root->lchild = NULL;
root->rchild = NULL;

q.Enqueue(root); // insert the address into the queue

while(!q.isEmpty()){
    p = q.Dequeue();
    cout<<"Enter the left child of "<<p->data<<endl;
    cin>>element;
    if(element!=-1){
        t = new Node;
        t->data = element;
        t->lchild=t->rchild=NULL;
        p->lchild = t;
        q.Enqueue(t);
    }
    cout<<"Enter the right child of "<<p->data<<endl;
    cin>>element;
    if(element != -1){
    t = new Node;
    t->data = element;
    t->lchild=t->rchild=NULL;
    p->rchild = t;
    q.Enqueue(t);
    }
}

}

void Tree::Preorder(Node* p){
   if(p){
    cout<<p->data<<" ";
    Preorder(p->lchild);
    Preorder(p->rchild);
  }
}

void Tree::Inorder(Node* p){
  if(p){
    Inorder(p->lchild);
    cout<<p->data<<" ";
    Inorder(p->rchild);
  }
}

void Tree::Postorder(Node* p){
  if(p){
    Postorder(p->lchild);
    Postorder(p->rchild);
    cout<<p->data<<" ";
  }
}


void Tree::IterativePreorder(Node* p){
  Stack s(100);
  while(p != NULL || !s.isEmpty()){
  if(p){ 
    cout<<p->data<<" ";
    s.Push(p);
    p = p->lchild;
  }else{
    p = s.Pop();
    p = p->rchild;
  }
  }
}

void Tree::IterativeInorder(Node* p){
  Stack s(100);
  while(p != NULL || !s.isEmpty()){
    if(p){
      s.Push(p); // push the address before moving to next left child
      p = p->lchild;
    }else{
      p = s.Pop(); 
      cout<<p->data<<" ";
      p = p->rchild;
    }
  }
}

void Tree::IterativePostorder(Node* p){
  Stack s(100);
  while(p != NULL || s.isEmpty()){
    
  }
}

/* Main Method */
int main(){
    Tree T;
    T.createTree();
    cout<<"Preorder"<<endl;
    T.IterativePreorder(T.root);
    // T.Preorder(T.root);
    cout<<"\nInorder"<<endl;
    // T.Inorder(T.root);
    T.IterativeInorder(T.root);
    cout<<"\nPostorder"<<endl;
    // T.Postorder(T.root);
    // T.LevelOrder(T.root);
    // T.Height(T.root);
    cout<<endl;
    return 0;
}
