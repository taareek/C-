#include<iostream>
#include<cstdlib>
using namespace std;

int percentCal(int nodes, int percent)
{
    return ((nodes * (nodes - 1)*percent)/200)*2;
}

int main()
{
    int nodes,percent;
    cin>>nodes;
    cin>>percent;
    cout<<endl;
    int a[nodes][nodes];
    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
            if(i=j){
                a[i][j]=0;
            }else{
            a[i][j]= percentCal(nodes,percent);
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}



