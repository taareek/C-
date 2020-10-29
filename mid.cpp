#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
	int data;
	node* next;
};

void add(node* &sll, int val){
	if(sll==NULL){
		//allocating the first node
		node* newNode = new node;
		newNode->data = val;

		//since sll is null in the beginning
		newNode->next = sll;

		//node sll contains newNodes adress
		sll = newNode;

	}
	else{
		//transfer of address of first element
		node* current = sll;

		//go until you find a null value
		while(current->next!=NULL){
			current = current->next;
		}

		//allocate a new node
		node* newNode = new node;

		//put the data in the new node
		newNode->data = val;

		//tansfer current next value into newNode next
		//in this case, current next happens to be null
		newNode->next = NULL;

		//current->next now points to the
		//newNode instead of null
		current->next = newNode;

	}

}




//printing of the list
void display(node* &sll){
	node* current = sll;
	while(current!=NULL){
		cout<<" "<<current->data<<" ";
		current=current->next;
	}
}

void addfirst(node*&sll, int data){
    node*newNode= new node;
    newNode->data= data;
    node*current= sll;
    newNode->next= current;
    sll= newNode;
}
void addLast(node*&sll, int data)
{
         node*newNode= new node;
         newNode->data= data;
         newNode->next= NULL;
         if(sll==NULL){
            sll= newNode;
         }else{
             node*current= sll;
             while(current->next!=NULL){
                current= current->next;
             }
             current->next= newNode;

         }

}

void insertAscending(node*&sll, int data){
    node*newNode= new node;
    newNode->data= data;
    node*current= sll;
    node*prev= NULL;
    while(current!=NULL){
        if(current->data > newNode->data)
            break;
        prev=current;
        current= current->next;
    }
    newNode->next= current;
    prev->next= newNode;
}
void insertAfter(node*&sll, int searchValue, int data){
    node*newNode= new node;
    newNode->data= data;
    newNode->next= NULL;
    node*current= sll;
    bool flag= false;
    while(current!= NULL){
        if(current->data== searchValue){
             newNode->next= current->next;
             current->next= newNode;

             flag==true;
             break;
        }else{

        current= current->next;
        }
        if(flag==true)
            cout<<"Not found.";
    }


}
void insertBefore(node*&sll, int sv, int nv){
    node*newNode= new node;
    newNode->data= nv;
    newNode->next= NULL;
    node*current= sll;
    node*prev= NULL;
    bool flag = false;
    while(current!= NULL){
        if(current->data== sv){
            if(current== sll){
                sll= newNode;
                newNode->next= current;

            }else{
                prev->next= newNode;
                newNode->next= current;

            }


        }
        prev= current;
        current= current->next;

    }
}

int main(){
	node *Head= NULL;

	for(int i = 0; i<10; ++i){
		//insert(front,i,rand()%100);
		add(Head,rand()%100);
	}

	display(Head);
	cout<<endl;
	insertAfter(Head, 34, 23);
	display(Head);
	cout<<endl;
	insertBefore(Head, 24, 199);
	display(Head);
	return 0;

}
