#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;
 int l;
 cout<<"\nEnter the Lowest cost: ";
 cin>>l;
 cout<<endl;
 int arr[n][n];
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(i==j){
            arr[i][j]=0;
        }else{
        arr[i][j]= l + rand()%10;
        arr[j][i]= arr[i][j];
        }
        cout<<arr[i][j]<<" ";

 }
 cout<<endl;
 /*graph[nodes][nodes]= {
        { 0,4,0,0,0,0,0,8,0},
        { 4,0,8,0,0,0,0,11,0},
        { 0,8,0,7,0,4,0,2,0},
        { 0,0,7,0,9,14,0,0,0},
        { 0,0,0,9,0,10,0,0,0},
        { 0,0,4,14,10,0,2,0,0},
        { 0,0,0,0,0,2,0,1,6},
        { 8,11,0,0,0,0,1,0,7},
        { 0,0,2,0,0,0,6,7,0},
    }; */
 }
}
