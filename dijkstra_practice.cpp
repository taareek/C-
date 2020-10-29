#include<iostream>
#include<cstdlib>
using namespace std;

int findMin(int cost[5], int parent[5], bool flag[5]){
    int min= 1000;
    int min_cost;
    for(int i=0; i<5; i++){
        if(flag[i]!=true && cost[i]<min){
            min= cost[i];
            min_cost= i;
        }
    }
    return min_cost;
}

void printPath(int parent[5]){

    for(int k=0; k<5; k++){
        if(parent[k]==-9999)
            return;
            printPath(parent);
            cout<<k<<" ";
        }
}

void explore_dijkstra(int g[5][5], int cost[5], int parent[5], bool flag[5]){
    int src;
    cout<<"Enter the source path: ";
    cin>>src;
    for(int i=0; i<5; i++){
            cost[i]=0;
            parent[0]= -1;
            flag[i]= false;
    }
    cost[src]=0;
    for(int i=0; i<4; i++){
        int a= findMin(cost, parent, flag);
        flag[i]= true;
        for(int m=0; m<5; m++){
            if(!flag[i] && g[a][m] && g[a][m]+ cost[a]< cost[m] ){
                parent[m]=a;
                cost[m]= cost[a]+ g[a][m];
            }
        }
    }
    cout<<"Source->Destination\tDistance\tPath"<<endl;
    for(int i=0; i<5; i++){
        cout<<src<<"->"<<i<<"\t\t"<<cost[i]<<"\t\t"<<src<<" ";
        printPath(parent);
        cout<<endl;
    }
}

int main(){
     //int graph[5][5]= {{1,1,1,1,0}, {1,1,1,1,1}, { 1,1,1,0,1}, {1,1,0,1,1}, {0,1,1,1,1}};
     int g[5][5]= {{0,5,20,10,0},{5,0,3,15,25}, {20,3,0,0,3}, {10, 15,0,0,2},{0,25,3,2,0}};
      int cost[5];
      int parent[5];
      bool flag[5];
      explore_dijkstra(g, cost, parent, flag);

  }
