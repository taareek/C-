#include<iostream>
#include<cstdlib>
using namespace std;
void sorted(int[], int);
void print(int[], int);
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"\nUnsorted Array: ";
    for(int i= 0; i<n; i++){
        arr[i]= rand()%100;
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Sorted Array: ";
    sorted(arr, n);
    print(arr, n);

}
void sorted(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[i]){
               int t= arr[i];
                arr[i]= arr[j];
                arr[j]= t;
            }
        }
    }

}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
