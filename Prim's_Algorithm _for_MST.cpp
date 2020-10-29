#include<iostream>
#include<cstdlib>
#define a 9
using namespace std;

struct prims
{
    int cost;
    int parent;
    bool visited;
};

void printGraph(int graph[a][a]){
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int find_min(struct prims arr[a]){
    int least, index;
    for(int i=0; i<a; i++){
            if(arr[i].visited==false && arr[i].cost<least){
                least= arr[i].cost;
                index= i;
            }
        }

    return index;
}

void prims_mst(int graph[a][a], struct prims arr[a]){
    for(int m=0; m<a-1; m++){
        int k= find_min(arr);
        arr[k].visited= true;

        for(int n=0; n<a; n++){
            if(arr[n].visited!=true && graph[k][n]<arr[n].cost){
                arr[n].parent= k;
                arr[n].cost= graph[k][n];
            }
        }
    }
    for(int i=0; i<a; i++){
        cout<<arr[i].parent<<"-> ";
    }

}


int main(){
    //Graph
    int graph[a][a]= {
        { 0,4,0,0,0,0,0,8,0},
        { 4,0,8,0,0,0,0,11,0},
        { 0,8,0,7,0,4,0,2,0},
        { 0,0,7,0,9,14,0,0,0},
        { 0,0,0,9,0,10,0,0,0},
        { 0,0,4,14,10,0,2,0,0},
        { 0,0,0,0,0,2,0,1,6},
        { 8,11,0,0,0,0,1,0,7},
        { 0,0,2,0,0,0,6,7,0},
    };
    //Label Array
    struct prims arr[a];
    int INFINITY, m;
    for(int i=0; i<a; i++){
        arr[i].cost= INFINITY;
        arr[i].parent= -1;
        arr[i].visited= false;
    }
    int start;
    //cout<<"Enter the node from which you want to start(0-8): ";
    //cin>>start;
    arr[0].cost=0;

    //printGraph(graph);


    cout<<endl;
    prims_mst(graph, arr);

}
