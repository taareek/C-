//singly linked list
#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
    int data;
    node* next;
};

bool isEmpty(node *&list){
  return (list==NULL);
}
//print the list
void display(node *&list) {
    node* current = list;
     while (current!= NULL){
     cout<<" "<< current->data<<" ";
     current = current->next;
  }
    cout<<endl;
}

//add an element to the back of a list
//enqueue for queue
void enqueue(node *&list, int data){
  if(list == NULL){
    node *newNode = new node;
    newNode->data = data;
    newNode->next = list;
    (list) = newNode;
  }

  else{
    node *current = list;
    while(current->next!=NULL)
      {current = current->next;}
    node *newNode = new node;
    newNode->data = data;
    newNode->next = current->next;
    current->next = newNode;
  }
}
//remove the front element of a list
//also known as dequeue for queue
int dequeue(node*& list){
    if(list != NULL){
        int val = (list)->data;
        node *junk = list;
        list = (list)->next;
        delete[] junk;
        return val;
    }
}

void myPush(node*&a, node*&b, int num){
    enqueue(b,num);
     while(!isEmpty(a)){
        enqueue(b,dequeue(a));
    }
    node *c;
    c=a;
    a=b;
    b=c;
}
int myPop(node*&a,node*&b){
  return dequeue(a);
}

int main(){

    node *n1 = NULL;
    node *n2 = NULL;
    myPush(n1,n2,5);
    myPush(n1,n2,51);
    myPush(n1,n2,25);
    myPush(n1,n2,52);
     cout<<myPop(n1,n2)<<endl;
    cout<<myPop(n1,n2)<<endl;
    cout<<myPop(n1,n2)<<endl;
    cout<<myPop(n1,n2)<<endl;

    return 0;
}




