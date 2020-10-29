#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n, p,l;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    cout<<"\nEnter the lowest cost: ";
    cin>>l;
    cout<<"\nEnter the probability: ";
    cin>>p;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]= 0;
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            arr[i][j]=l+ rand()%10;
            arr[j][i]= arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }


}
