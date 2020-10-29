#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
    int data;
    node* prev;
    node* next;
};

void dllEnqueue(node* &dll,int data){
    if(dll == NULL){
        node *newNode = new node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        dll = newNode;
    }
    else{
        node* current = dll;
        node *newNode = new node;
        newNode->data = data;
        newNode->next = current;
        current->prev = newNode;
        current = current->prev;
        dll = current;
    }
}

void dllDequeue(node* &dll){
    if(dll == NULL){
        cout<<"List is Empty"<<endl;
    }
    else if(dll->next != NULL){
        node *current = dll;
        while (current->next != NULL) {
            current = current->next;
        }
        current = current->prev;
        current->next = NULL;
    }
    else{
        dll = NULL;
        cout<<"List has been emtied"<<endl;
    }
}
void display(node * &sll)
{
    node* current = sll;
    if (sll == NULL)
    {cout << "List is empty";
        return;
    }
    cout << "List is:" << endl;
    while(current->next!=NULL){
        cout<<" "<< current->data<<" ";
        current = current->next;
    }
    cout<<" "<< current->data<<" " <<endl;

}
int main(){
    node *Head= NULL;
    int c;

    for(int i =0; i<5;++i)
    {

        display(Head);
        cout <<endl <<  "Enter new Number:" <<endl;
        cin >> c;
        dllEnqueue(Head, c);
    }
    display(Head);
    for(int i =0; i<5;++i)
    {

        display(Head);
        cout <<endl <<  "dequeing " <<endl;
        dllDequeue(Head);
    }
    display(Head);

    return 0;
}
