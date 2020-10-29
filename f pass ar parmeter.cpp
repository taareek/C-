#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void fillArrayWithRandomNumbers(int[], int);
void printArray(int[], int);
void bubbleSort(int[], int);

int main(){
int n;
cin>>n;
int A[n];
fillArrayWithRandomNumbers(A,n);
printArray(A,n);
bubbleSort(A,n);

}
void printArray(int A[], int n){
for(int i=0; i<n; i++){
    cout<<A[i]<<",";
}
cout<<"\b "<<endl;
}
void fillArrayWithRandomNumbers(int A[],int n){
srand(time(0));
for(int i=0; i<n; i++){
    A[i]=rand()%100;
}
}
void bubbleSort(int A[], int n){
for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
        if(A[j]>A[j*1]){
            swap(A[j],A[j*1]);
        }
    }
  }
}
