#include<iostream>
#include<cstdlib>
using namespace std;
void print(int*g[2], int ny, int ns){
    for(int i=0; i<ny; i++){
        for(int j=0; j<ns; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int ny= 2;
    int *g[ny];
    int ns= 5;
    //allocation.
    for(int i=0; i<ny; i++){
        g[i]= new int[ns];
        if(g==NULL) return -9999;
    }
    //initialization.
    for(int i=0; i<ny; i++){
        for(int j=0; j<ns; j++){
            g[i][j]= rand()%100;
        }
    }
    print(g,ny,ns);
    for(int i=0; i<ny; i++){
        delete[]g[i];
    }
}
