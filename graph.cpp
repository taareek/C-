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

void dfsHelper(graph *&g, int start, bool *&visited){
    visited[start] = true;
    cout<<start<<" ";
    node *current = g->adj[start];
    while(current!=NULL){
        if(!visited[current->dest]){
            dfsHelper(g,current->dest,visited);
        }
        current = current->next;
    }
}
void dfs(graph *&g, int start){
    bool *visited = new bool[g->numVertex];
    for(int i = 0; i<g->numVertex; ++i){
        visited[i] = false;
    }
    dfsHelper(g,start,visited);

}

#include <queue>
void bfs(graph*&g, int start){

    bool *isVisited = new bool[g->numVertex];
    for(int i=0;i<g->numVertex; ++i){
        isVisited[i] = false;
    }
    queue<int> q;
    isVisited[start] = true;
    q.push(start);

    while(!q.empty()){
        start = q.front();
        cout<<start<<" ";
        q.pop();

        node *current = g->adj[start];
        while(current!=NULL){
            if(!isVisited[current->dest]){
                isVisited[current->dest] = true;
                q.push(current->dest);
            }
            current = current->next;
        }
    }

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
  addEdge(g,0,1);

printGraph(g);
cout<<endl;
 bfs(g,0);
cout<<endl;
 dfs(g,0);
  return 0;
}




