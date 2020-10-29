/*
It will take 10 numbers from user
and will return the the smallest and largest
*/

#include<iostream>
using namespace std;
int main(){
int A[10], smallest, largest;
for(int i=0; i<10; i++){
    cin>>A[i];
}
largest=A[0];
smallest=A[0];
for(int i=0; i<10; i++){
    if(A[i]> largest){
        largest= A[i];
    }
    if(A[i]<smallest){
        smallest=A[i];
    }
}
cout<<"Largest: "<<largest<<endl;
cout<<"Smallest: "<<smallest;
}
