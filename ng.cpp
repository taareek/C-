#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i =0; i<n; i++ ){
        cin>>a[i];
    }
    for(int j=0; j<n; j++){
        cout<<a[j]<<" ";
    }

}
