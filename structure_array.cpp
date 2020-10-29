#include<iostream>
#include<cstdlib>
#define infinity 9999;
using namespace std;
struct bal{
         int cost;
         int parent;
         bool visit;

     };

void display(struct bal l[] ){
    for(int i=0; i<5; i++){
        cout<<l[i].cost;
        cout<<"\t";
        cout<<l[i].parent;
        cout<<"\t"<<l[i].visit;
        cout<<endl;
    }

}

int label_array(struct bal label[]){
    for(int i=0; i<5; i++){
        label[i].cost= infinity;
        label[i].parent= i;
        label[i].visit= false;
    }

}

int main(){

    struct bal label[5];
    label_array(label);
    cout<<"Cost"<<"\tParent"<<"\tVisited"<<endl;
    label[1].cost= 12;
    label[1].visit= true;
    //cout<<label[1].flag;
    display(label);

}
