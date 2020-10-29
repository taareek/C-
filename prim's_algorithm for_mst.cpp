#include<iostream>
#include<cstdlib>
#define infinity 99999
#define T 9
using namespace std;

int find_minimum(int cost[T], bool visited[T]){
    int minimum= infinity;
    int index=9;
    for(int i=0; i<T; i++){
        if(visited[i]==false && cost[i]< minimum){
            minimum= cost[i];
            index= i;
        }
    }
    return index;
}

void print_mst(int parent[T], int graph[T][T]){

    for(int i=1; i<T; i++){
          cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n";
    }
}

void prims_mst(int cost[T], int parent[T], bool visited[T], int graph[T][T]){
    for(int i=0; i<T-1; i++){
        int k= find_minimum(cost, visited);
        visited[k]= true;
        for(int j=0; j<T; j++){
            if(graph[k][j]&& visited[j]==false && graph[k][j]<cost[j]){
                parent[j]= k;
                cost[j]= graph[k][j];
            }
        }
    }
}

int main(){
    int graph[T][T]= {
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
    int cost[T], parent[T];
    bool visited[T];
    for(int i=0; i<T; i++){
        cost[i]= infinity;
        visited[i]= false;
    }
    cost[0]=0;
    parent[0]=-1;
    prims_mst(cost, parent, visited,graph);
    print_mst(parent, graph);
    return 0;
}

