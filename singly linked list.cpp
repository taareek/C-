#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};

void add(node**list, int data)
{
    if(*list==NULL){
        //newNode is the first node.
        node*newNode= new node;
        newNode->data = data;
        //since *list is null to begin.
        newNode->next= *list;
        //the null now contains newNodes address.
        (*list)=newNode;
    }else{
        node*current=*list;
        while(current->next!=NULL){
            current= current->next;
        }
        node*newNode= new node;
        newNode->data= data;
        newNode->next= current->next;
        current->next=newNode;
    }
}
void display(node**list){
    node*current=*list;
    while(current!=NULL){
        cout<<" "<<current->data<<" ";
        current= current->next;
    }
}
int main()
{
    node*front= NULL;
    for(int i=0; i<10; i++)
        display(&front);
    return 0;
}
