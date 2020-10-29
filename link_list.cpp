/*
This code works for linked list 
where you can add, insert, remove and find element of a link list
*/

#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    node*next;
};
void add(node**list, int data){
    if(*list==NULL){
        node*newNode= new node;
        newNode->data= data;
        newNode->next= *list;
        *list= newNode;
    }else{
        node*current= *list;
        while(current->next!=NULL){
            current= current->next;
        }
        node*newNode= new node;
        newNode->data= data;
        newNode->next= current->next;
        current->next= newNode;
    }
}
void insert(node**list, int index, int data){
    if(index==0){
        node*newNode= new node;
        newNode->data= data;
        newNode->next= *list;
        *list= newNode;
    }else{
        node*current= *list;
        for(int i=0; i<index-1; i++){
          current= current->next;
        }
          node*newNode= new node;
            newNode->data= data;
            newNode->next= current->next;
            current->next= newNode;
    }

}
void removeElement(node**list, int index){
    if(index==0){
        node*junk= *list;
        *list= (*list)->next;
        delete[] junk;

    }else{
        node*current= *list;
        for(int i=0; i<index-1; i++){
            current= current->next;
        }
        node*junk= current->next;
        current->next= current->next->next;
        delete[] junk;
    }
}
bool findELement(node**list, int data){
    node*current= *list;
    while(current!=NULL){
        if(current->data==data){
            cout<<"Ache";
        }else{
        cout<<"Nai re bhai";
        }
        current= current->next;



}
}
void display(node**list){
    node*current= *list;
    while(current!=NULL){
        cout<<" "<<current->data<<" ";
        current= current->next;
    }

}
int main(){
    node*front= NULL;
    for(int i=0; i<10; i++)
    insert(&front, 0, rand()%100);
    display(&front);
     cout<<endl;
     int m;
     cout<<"Enter the number: "<<endl;
     cin>>m;
     cout<<endl;
     findELement(&front, m);
    display(&front);
    return 0;
}
