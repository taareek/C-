#include<iostream>
#include<cstdlib>


#define infinity 99999

using namespace std;

struct label
{
    int cost;
    int parent;
    bool visited;
};

void create_graph(int **&graph, int nodes)
{
    graph = new int*[nodes];
    for(int i = 0; i < nodes; ++i)
         graph[i] = new int[nodes];
}

void populate_graph(int **graph, int nodes, int high, int low)
{
    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
                    graph[i][j]=0;

        }
    }
    for(int i=0; i<nodes; i++){
        for(int j= i+1; j<nodes; j++){
            graph[i][j]= low+rand()%(high+1-low);
            graph[j][i]= graph[i][j];
        }
    }
}

void display_graph(int **graph, int nodes)
{
    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

void populate_label_array(struct label arr[ ], int nodes)
{
    for(int i=0; i<nodes; i++){
        arr[i].cost= infinity;
        arr[i].parent= -1;
        arr[i].visited= false;
    }
}

void print_label_array(struct label arr[ ], int nodes)
{
    for(int i=0; i<nodes; i++){
        cout<<arr[i].cost<<"\t";
        cout<<arr[i].parent<<"\t";
        cout<<arr[i].visited;
        cout<<endl;
    }
}

int find_Minimum(struct label arr[ ], int nodes){
    int least, index;
    least= infinity;
    for(int i=0; i<nodes; i++){
            if(arr[i].visited==false && arr[i].cost<=least){
                least= arr[i].cost;
                index= i;
            }
        }

    return index;
}

int print_dijkstra(struct label arr[ ], int nodes)
{
    cout<<"Source\t\tCost"<<endl;
    for(int i=0; i<nodes; i++){
        cout<<i<<"\t\t ";
        cout<<arr[i].cost<<endl;
    }
}

void explore_dijkstra(int **graph, struct label arr[ ], int nodes, int source)
{
    //populate_label_array(arr, nodes);
    //create_graph(graph, nodes);
    //populate_graph(graph, nodes, high,low);
    arr[source].cost= 0;
    for(int k=0; k<nodes-1; k++){
        int a= find_Minimum(arr, nodes);
       // cout<<a<<" ";
        arr[a].visited= true;
        //cout<<arr[a].visited<<" ";
        for(int l=0; l<nodes; l++){
                if(arr[l].visited!=true && graph[a][l] && arr[a].cost != infinity && arr[a].cost + graph[a][l]< arr[l].cost ){
                    arr[l].cost= arr[a].cost + graph[a][l];
                    arr[l].parent= a;
                    cout<<arr[l].parent<<" ";
                }

        }
    }


   print_dijkstra(arr, nodes);


}

int main()
{
    int **graph;
    int nodes;
    cout<<"Enter the nodes: ";
    cin>>nodes;
    int high, low;
    cout<<"\nEnter highest cost: ";
    cin>>high;
    cout<<"\nEnter lowest cost: ";
    cin>>low;
    struct label arr[nodes];
    populate_label_array(arr, nodes);
    create_graph(graph, nodes);
    populate_graph(graph, nodes, high, low);
    display_graph(graph, nodes);

    cout<<endl<<endl;

    //print_label_array(arr, nodes);
    cout<<endl;
    //cout<<find_Minimum(arr, nodes);
    int source;
    cout<<"\nEnter the source node: ";
    cin>>source;
    explore_dijkstra(graph, arr, nodes, source);


}
