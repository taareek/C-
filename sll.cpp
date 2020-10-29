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

//calculate average
float calAvg(node*&sll){
    int sum=0;
    node*current= sll;
    while(current!=NULL){
        sum= sum+ current->data;
        current= current->next;
    }
    float avg= sum/10.0;
    return avg;
}
//counting how many values
int countValues(node*&sll){
    int counter=0;
    node*current= sll;
    while(current!=NULL){
        counter++;
        current= current->next;
    }
    return counter;
}


int main(){
	node *Head= NULL;

	add(Head, 10);
	add(Head, 20);
	add(Head, 30);
	add(Head, 69);
    add(Head, 13);
	add(Head, 31);
	add(Head, 47);


	display(Head);
	cout<<endl;

	countValues(Head);
	int b= countValues(Head);
	cout<<"THere are "<<b<<" Values in the list."<<endl;
	return 0;

}
