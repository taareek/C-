#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;


void create_array(int* &A, int s);
void populate_array(int *A,int s, int low, int high);
void display_array(int *A, int s, int high);
int num_dig(int n);
void insertion_sort(int *A, int s);
int bin_search(int *A, int s, int key);

int main(){
	int *A;
	int s=5;
	int low=334;
	int high=5000;
	int key;
	create_array(A,s);
	populate_array(A,s,low,high);
	display_array(A,s,high);
	cout<<endl<<endl;
	insertion_sort(A,s);
	display_array(A,s,high);
	cout<<"\n\nEnter the number to look for: ";
	cin>>key;
	int index=bin_search(A,s,key);
	if(index==-1)cout<<key<<" is not found\n";
	else cout<<key<<" found @ slot "<<index+1<<endl;
	return 0;
}

void create_array(int* &A, int s){
	A=new int[s];
}

void populate_array(int *A,int s, int low, int high){
	srand(time(0));
	for(int i=0;i<s;++i){
		A[i]=low+rand()%(high+1-low);
	}
}

void display_array(int *A, int s, int high){
	for(int i=0;i<s;++i){
		if(i%5==0)cout<<endl;
		cout<<setw(3+num_dig(high))<<A[i];
	}
}

int num_dig(int n){
	if(n<10)return 1;
	return 1+num_dig(n/10);
}

void insertion_sort(int *A, int s){
	for(int i=1;i<s;++i){
		int j=i-1;
		int key=A[i];
		while(j>=0){
			if(A[j]>key)A[j+1]=A[j];
			else break;
			j--;
		}
		A[j+1]=key;
	}
}

int bin_search(int *A, int s, int key){
	int left, right,mid;
	left=0;
	right=s-1;
	do{
		mid=(right+left)/2;
		if(key>A[mid])left=mid+1;
		else if(key<A[mid])right=mid-1;
		else return mid;
	}while(left<=right);
	return -1;
}




