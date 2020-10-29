#include <iostream>
using namespace std;
struct node{
  int dest;
  int depth;
  node *next;
};

struct graph{
  int numVertex;
  node** adj;
 };

void createGraph(graph *g, int numVertex){
  g->numVertex = numVertex;
  g->adj = new node*[numVertex];
  for(int i=0; i<numVertex; ++i)
    g->adj[i] = NULL;
}

void addEdge(graph *g,int src, int dest){
  node*n = new node;
  n->dest = dest;
  n->next = g->adj[src];
  g->adj[src] = n;

    /*
  node*m = new node;
  m->dest = src;
  m->next = g->adj[dest];
  g->adj[dest] = m;
 */
}

void printGraph(graph *g){
  int v=0;
  for(int i=0; i<g->numVertex; ++i)
  {
    node *n = g->adj[i];
    cout<<i<<" ";
    while(n!=NULL){
      cout<<n->dest<<" ";
      n = n->next;
    }
    cout<<endl;
  }

}

void printPathArray(int path[], int num){
    for(int i=0; i<num; ++i){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}
void pathHelper(graph *&g, int src,int dest, bool *&visited,int path[], int &numOfElm){
    visited[src] = true;
    path[numOfElm] = src;
    numOfElm += 1;

    if(src==dest){
        printPathArray(path,numOfElm);
    }
    else{
        node *current = g->adj[src];
        while(current!=NULL){
            if(!visited[current->dest]){
                pathHelper(g,current->dest,dest, visited,path, numOfElm);
            }
            current = current->next;
        }
    }
    visited[src] = false;
    numOfElm -=1;

}
void printPath(graph *&g, int src, int dest ){
    bool *visited = new bool[g->numVertex];
    for(int i = 0; i<g->numVertex; ++i){
        visited[i] = false;
    }
    int numOfElm = 0;
    int path[g->numVertex];
    pathHelper(g,src,dest,visited,path,numOfElm);

}

int main(){
  graph *g = new graph;
  createGraph(g,9);
  addEdge(g,0,1);
  addEdge(g,0,8);
  addEdge(g,0,7);
  addEdge(g,7,6);
  addEdge(g,6,5);
  addEdge(g,7,5);
  addEdge(g,5,8);
  addEdge(g,1,8);
  addEdge(g,8,3);
  addEdge(g,3,2);
  addEdge(g,2,8);
  addEdge(g,5,3);
  addEdge(g,5,4);
  addEdge(g,2,4);

  printPath(g,0,8);
  //printGraph(g);
  // bfs(g,0);
  //cout<<endl;
  //dfs(g,0);
  return 0;
}







