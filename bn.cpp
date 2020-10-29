#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;

void create_array(int* &A, int s);
void populate_array(int *A,int s, int low, int high);
void display_array(int *A, int s, int high);
int num_dig(int n);
void insertion_sort(int *A, int left,int right);
int bin_search(int *A, int s, int key);
int rec_bin_search(int *A, int left,int right, int key);
void merge(int *A,int i, int j, int k);
void merge_sort(int *A, int left, int right);
void TOH(int n, int start, int end);

int main(){
	int n;
	int start, end;
	cout<<"Enter Number of disk, start pole and end pole:";
	cin>>n>>start>>end;
	TOH(n,start,end);
	/*
	int *A;
	int s=10000000;
	int low=334;
	int high=5000;
	int key;
	create_array(A,s);
	populate_array(A,s,low,high);
	//display_array(A,s,high);
	//cout<<endl<<endl;
	merge_sort(A,0,s-1);
	//display_array(A,s,high);
	/*
	cout<<"\n\nEnter the number to look for: ";
	cin>>key;
	int index=rec_bin_search(A,0,s-1,key);
	if(index==-1)cout<<key<<" is not found\n";
	else cout<<key<<" found @ slot "<<index+1<<endl;
	*/
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

void insertion_sort(int *A, int l,int r){
	for(int i=l+1;i<=r;++i){
		int j=i-1;
		int key=A[i];
		while(j>=l){
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

int rec_bin_search(int *A, int left,int right, int key){
	if(left>right)return -1;
	int mid=(left+right)/2;
	if(A[mid]==key)return mid;
	if(key>A[mid])return rec_bin_search(A,mid+1,right,key);
	if(key<A[mid])return rec_bin_search(A,left,mid-1,key);
}

void merge(int *A,int i, int j, int k){
	int s1=j-i+1;
	int s2=k-j;
	int *L=new int[s1];
	int *R=new int[s2];
	int *C=new int[s1+s2];
	for(int m=0;m<s1;++m){
		L[m]=A[i+m];
	}
	for(int p=0;p<s2;++p){
		R[p]=A[j+1+p];
	}

	int m=0;
	int p=0;
	for(int c=0;c<s1+s2;++c){
		if(m==s1){
			C[c]=R[p];
			p++;
		}
		else if(p==s2){
			C[c]=L[m];
			m++;
		}
		else if(L[m]<R[p]){
			C[c]=L[m];
			m++;
		}
		else if(R[p]<=L[m]){
			C[c]=R[p];
			p++;
		}
	}

	for(int q=0;q<s1+s2;++q){
		A[i+q]=C[q];
	}
}

void merge_sort(int *A, int left, int right){
	if(right>left){
		int mid=(left+right)/2;
		merge_sort(A,left,mid);
		merge_sort(A,mid+1,right);
		merge(A,left,mid,right);
	}
}

void TOH(int n, int start, int end){
	static int count=0;
	if(n==1){
		cout<<start<<"-->"<<end<<endl;
		count++;
	}
	else{
		TOH(n-1,start,1+2+3-start-end);
		cout<<start<<"-->"<<end<<endl;
		count++;
		TOH(n-1,1+2+3-start-end,end);
		cout << start<< "-->" << end<< endl ;
	}
	cout<<endl<<count<<endl;
}
