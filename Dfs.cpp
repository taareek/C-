#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stack>

using namespace std;
int visited[5] = {0}; //n is no of vertices and graph is sorted in array G[5][5]
int a[5][5] = {{0, 0, 1,0,0}, {0,0,1,0,1}, { 0,1,0,0,1}, {1,1,0,0,1}, {1,1,0,1,0}};
void dfs(int v, int w);

int main()
{
    int v;
    cout <<"The adjacency matrix shown as" <<endl;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"Enter the starting node for Depth First search" << endl;
    cin >> v;
    cout <<"Enter the destination node for Depth First search" << endl;
    int w;
    cin >> w;

    dfs(v, w);
//DFSRecursive(v,w);
    return 0;

}
void dfs(int v, int w)
{

    stack<int> s;
    s.push(v);
    while(!s.empty())
    {
        int popped = s.top();
        s.pop();
        if(visited[popped]==0)
        {
            cout << popped << "->";

            visited[popped]=1;
            if (popped == w)
                break;

        }
        else
            continue;
        for(int i=0; i < 5; i++)
        {
            if(a[popped][i]==1 && visited[i]==0)
            {
// push all the unvisited neighbours in the stack
                s.push(i);
            }
        }
    }

}
