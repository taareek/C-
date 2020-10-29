#include<iostream>
using namespace std;

void printTrianglev3(int n, char c){
for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
        cout<<c;
    }
    cout<<endl;

  }
}
int main(){
int x;
char c;
cout<<"Enter number for triangle size: ";
cin>>x;
cout<<"Enter character: ";
cin>>c;
printTrianglev3(x,c);
}
