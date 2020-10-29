#include<iostream>
using namespace std;

struct Node
{
    int value;
    int  depth;
    Node*left;
    Node*right;
};
void bstInsert(Node*&node, int i){
    if(node==NULL){
        node= new Node;
        node->value= i;
        node->left= node->right= NULL;
    }
    else if(node->value <i){
        bstInsert(node->right, i);
    }else if(node->value>i){
        bstInsert(node->left, i);
    }
    else return;
}
bool findNode(Node*node, int i){
    if(node==NULL) return false;
    else if(node->value==i){
        return true;
    }
    else if(node->value<i){
        return findNode(node->right, i);
    }
    else{
        return findNode(node->left, i);
    }
}
void printBST(Node*node){
    if(node==NULL){
        return;
    }
    printBST(node->left);
    cout<<node->value<<" ";
    printBST(node->right);

}
void printLeafNodes(Node *& node)
{
    if(node== NULL) return ;
    if(node->left == NULL && node->right == NULL)
    {
        cout<<node->value<<" ";
    }
    printLeafNodes(node->left);
    printLeafNodes(node->right);
}
 int getMin(Node* node){
    if(node == NULL)return -1;
    while(node->left!=NULL){
        node= node->left;
    }
    return node->value;
}
void remove(Node* &node, int i){
    if(node == NULL){

    }
    else if(node->value < i)remove(node->right,i);
    else if(node->value > i)remove(node->left,i);
    else
    {
        //case: 1
        if(node->left == NULL && node->right == NULL)
            node = NULL;
        //case: 2
        else if(node->left == NULL)
            node = node->right;
        //case: 3
        else if(node->right == NULL)
            node = node->left;
        //case: 4
        else{
                int min = getMin(node->right);
                node->value = min;
                remove(node->right,min);
            }
    }
}
void countNodes(Node *&node, int &counter )
{
    if(node == NULL) return ;
    if(node!=NULL) ++counter;
    countNodes(node->left, counter);
    countNodes(node->right, counter);
}
int heightOfNode(Node *&node)
{
    if(node == NULL) return -1;
    else
    {
        int rightHeight = heightOfNode(node->right);
        int leftHeight = heightOfNode(node->left);
        if(leftHeight > rightHeight)
        return leftHeight+1;
        else return rightHeight+1;
    }
}
void depthOfNode(Node *&node, int d)
{
    if(node!=NULL)
    {
        node->depth = d;
        depthOfNode(node->left, d+1);
        depthOfNode(node->right, d+1);
    }
}



int main(){
    Node*root= NULL;
    bstInsert(root, 5);
    bstInsert(root, 15);
    bstInsert(root, 10);
    bstInsert(root, 4);
    bstInsert(root, 23);
    bstInsert(root, 2);
    bstInsert(root, 1);
    bstInsert(root, 25);
    printBST(root);
    cout<<endl<<endl;
    printLeafNodes(root);
    cout<<endl<<endl;
    heightOfNode(root);
    cout<<root->left->&left;
    cout<<endl<<endl;
    depthOfNode(root, 0);
    cout<<root->right->right->depth<<endl;


return 0;

}
