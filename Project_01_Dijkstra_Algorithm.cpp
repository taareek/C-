 #include<iostream>
 #include<cstdlib>
 #define infinity 998800;

 using namespace std;

 struct label
 {
     int cost;
     int parent;
     bool visited;
 };




 int main(){
     int n;
     cout<<"Enter the number of nodes: ";
     cin>>n;
    //Number of edges
    int edges= n*(n-1)/2;
    float p;
    cout<<"Enter the probability in percentage: ";
    cin>>p;
    float  connected_edge= (p/100)*edges;
    cout<<connected_edge;
    int graph[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            graph[i][j]= 0;
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            graph[i][j]=1+ rand()%10;
            graph[j][i]= graph[i][j];


        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }


    //Label Array
    struct label arr[n];
    for(int i=0; i<n; i++){
        arr[i].cost= infinity;
        arr[i].parent= -1;
        arr[i].visited= false;
    }
 }
