#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
struct Edge
{
    int source, dest;
};

struct graph
{
    int V, E;

    struct Edge* edge;
};

struct graph* create_graph(int V, int E)
{
    struct graph*g = (struct graph*) malloc( sizeof(struct graph) );
    g->V = V;
    g->E = E;

    g->edge = (struct Edge*) malloc( g->E * sizeof( struct Edge ) );

    return g;
}

int find_parent(int parent[], int i)
{
    if (parent[i] == -1)
        return i;
    return find_parent(parent, parent[i]);
}

void union_two(int parent[], int a, int b)
{
    int i = find_parent(parent, a);
    int j = find_parent(parent, b);
    parent[i] = j;
}

int detect_cycle( struct graph* g )
{
    int *parent = (int*) malloc( g->V * sizeof(int) );

    memset(parent, -1, sizeof(int) * g->V);

    for(int i = 0; i < g->E; ++i)
    {
        int x = find_parent(parent, g->edge[i].source);
        int y = find_parent(parent, g->edge[i].dest);

        if (x == y)
            return 1;

        union_two(parent, x, y);
    }
    return 0;
}

int main()
{
    int V , E ;
    cout<<"Enter the number of Vertex in Graph: ";
    cin>>V;
    cout<<"\nEnter the number of Edges in Graph: ";
    cin>>E;
    struct graph* g = create_graph(V,E);
    cout<<"Enter the connection between edges: ";
    int a, b;
   for(int i=0; i<E;i++){
        cin>>a>>b;
        g->edge[i].source = a;
        g->edge[i].dest = b;
        cout<<endl;
    }



    if (detect_cycle(g)==1)
        cout<<"Cycle detected !!"<<endl;
    else
        cout<<"Don't have any cycle."<<endl;

    return 0;


}
