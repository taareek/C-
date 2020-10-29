
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct node
{
int data;
node* prev;
node* next;
};

struct nodeTree
{
int data;
nodeTree* left;
nodeTree* right;
};

void AddTree (nodeTree* &root, int data)
{
nodeTree *newNode = new nodeTree;
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;

if(root==NULL)
{
root=newNode;
}

else
{
nodeTree* current= root;
nodeTree* prevT=NULL;

while(current!=NULL)
{
if(data<=current->data)
{
prevT=current;
current=current->left;
}
else
{
prevT=current;
current=current->right;
}
}

if(data<=prevT->data)
{
prevT->left = newNode;
}
else
prevT->right=newNode;
}


}

void inorder(nodeTree* root)
{
if (root == NULL) return;
inorder(root->left);
cout << root->data << ", ";
inorder(root->right);

}


void add(node * &sll, int data)
{
node *newNode = new node;
newNode->data = data;
newNode->next = NULL;
newNode->prev = NULL;
if(sll == NULL)
{


sll = newNode;
}

else
{
//transfer of address of the first element
node * current = sll;
//go until you find a null value
while(current->next!=NULL)
{
current = current->next;
}

//the address of the new node should be in the
//address variable of next
newNode->next = NULL;
current->next = newNode;
newNode->prev = current;
}
}


//print the list
void display(node * &sll)
{
node* current = sll;
if (sll == NULL)
{
cout << "List is empty";
return;
}
cout << "List is:" << endl;
while(current->next!=NULL)
{
cout<<" "<< current->data<<" ";
current = current->next;
}
cout<<" "<< current->data<<" " <<endl;

}

//Search list
bool searchL(node * &sll, int searchData)
{
node* current = sll;
if (sll == NULL)
{
cout << "List is empty";
return false;
}

while(current!=NULL)
{
if(current->data== searchData)
return true;
current = current->next;
}
return false;
}

bool searchTree(nodeTree * root, int searchData)
{
nodeTree* current= root;
if(root==NULL)
{
cout<<"List is empty"<<endl;
return false;
}
while(current!=NULL)
{
if(current->data==searchData)
return true;

else
{
if(searchData<=current->data)
current=current->left;
else
current=current->right;
}
}
return false;

}

int main()
{
node *Head= NULL;
nodeTree *root= NULL;
//nodeTree;
int c;
srand(time(NULL));
for(int i =0; i<5; ++i)
{

c = rand()%100;
AddTree(root, c);
}

cout<<"Inorder Tree is: "<< endl;
inorder(root);


cout<<endl;


do
{
cout<< "Enter number to search:";
cin >> c;
bool flag =searchTree(root,c);
if(flag)
cout << endl << "Found" << endl;
else
cout << endl<< "Not found" << endl;
}
while(c!=0);


return 0;
}
