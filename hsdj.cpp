
//singly linked list
#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
    int data;
    node* next;
};

void add(node **list, int data){
    if(*list == NULL){
        //newNode is the first node
node *newNode = new node;
        newNode->data = data;

          //since *list is null to begin
        newNode->next = *list;

        //the null now contains newNodes address
        (*list) = newNode;
    }

    else{
        //transfer of address of the first element
        node *current = *list;

        //go until you find a null value
        while(current->next!=NULL)
           {current = current->next;}

//allocate a node dynamically,
node *newNode = new node;

// put the data in the new node
newNode->data = data;

//transfer current next into newnode next
        //In this case current->next is null
newNode->next = current->next;
//the address of the new node is kept
        //in next address of current
        current->next = newNode;
    }

}

void insert(node **list, int index, int data){

    if(index == 0){
        node* newNode = new node;
         newNode->data = data;
        newNode->next = *list;
        *list = newNode;
    }
    else{
        node* current = *list;

        //There is a reason why index is index-1
        for(int i =0; i<index-1; ++i){
            current = current->next;
        }
          //same logic as add()
        node* newNode = new node;
          newNode->data = data;
        newNode->next = current->next;
        current->next = newNode;
    }
}

void removeElement(node **list, int index){
    if(index ==0){
         //take in the address of the first element
        node* junk = *list;

         //shift the list to the next address
        *list = (*list)->next;


         //delete junk
        delete[] junk;
    }
    else{
         //take in the address of the first element
        node* current = *list;

         //move till the element that requires deletion
        for(int i =0; i<index-1; ++i){
            current = current->next;
        }
       //store the address of the element to be removed
        node *junk = current->next;

          //skip the element and go the next element
        current->next = current->next->next;

          //delete the element to be deleted
        delete[] junk;
    }
}

//print the list
void display(node **list) {
    node* current = *list;
  while (current!= NULL){
     cout<<" "<< current->data<<" ";
     current = current->next;
  }
}

//check whether an element is present in the list
bool findElement(node **list, int value){
    node* current = *list;
    while(current!= NULL){
        if(current->data == value) return true;
        current = current->next;
    }
    return false;
}
float average(node**list )
{
    if(list==NULL){
        return -1;
    }
    int count=0;
    int sum=0;
    float avg=0.0;
    node*current=*list;
    while(current!=NULL){
        count++;
        sum+= current->data;
        current= current->next;

    }
    avg= (double)sum/count;
    return avg;

}

int main(){
    node *front = NULL;

        add(&front,4);
        add(&front,5);
        add(&front, 6);
        add(&front, 7);

    display(&front);
    cout<<"\nAverage of nodes: "<<average(&front);
    return 0;

}


