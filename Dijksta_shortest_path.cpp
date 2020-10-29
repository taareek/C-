#include<iostream>
#include<cstdlib>
#define inf 100000;
#define nodes 10
using namespace std;

struct label
{
    int cost;
    int parent;
    bool visited;
};

int coin_toss(void){
    int random_number;
	random_number = 1 + rand() % 2;

	return random_number;
}



int find_Minimum(struct label arr[10]){
    int least, index;
    for(int i=0; i<10; i++){
            if(arr[i].visited==false && arr[i].cost<=least){
                least= arr[i].cost;
                index= i;
            }
        }

    return index;
}

int print_dijkstra(struct label arr[10]){
    for(int i=0; i<10; i++){
        cout<<i<<"\t"<<arr[i].cost;
    }
}

void dijkstra_shortest_path(int graph, struct label arr[10], int start){
        arr[start].cost=0;
        for(int i=0; i<nodes-1; i++){
            int k= find_Minimum(arr);
            arr[i].visited = true;
            for(int l=0; l<nodes; l++){
                if(arr[l].visited==false  && graph[k][l] && arr[k].cost!= inf && arr[k].cost+ graph[k][l]<arr[l].cost){
                    arr[l].cost= arr[k].cost+ graph[k][l];
                }
            }
        }

       print_dijkstra(arr);

}


int main(){
    //Graph

    int graph[nodes][nodes];
    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
            graph[i][j]= 0;
        }
    }
    cout<<endl;
    for(int i=0; i<nodes; i++){
        for(int j= i+1; j<nodes; j++){
            graph[i][j]=1+ rand()%10;
            graph[j][i]= graph[i][j];


        }
    }
    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
            cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Your graph: "<<endl;


    //Label Array
    struct label arr[nodes];
    for(int i=0; i<nodes; i++){
        arr[i].cost= inf;
        arr[i].parent= -1;
        arr[i].visited= false;
    }
    int start;
    cout<<"Enter the node from which you want to start: ";
    cin>>start;

     dijkstra_shortest_path(graph,arr, start);



    cout<<endl;




}
