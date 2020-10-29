/*
This code will print a triangle which will take the size of triangle
from user
*/

#include<iostream>
using namespace std;
void printTrianglev2(int n){
for(int i=0; i<n; i++){
for(int j=0; j<=i; j++){
    cout<<"* ";
}
cout<<endl;
}
}
int main(){
int x;
//Taking size from the user
cout<<"Enter size: ";
cin>>x;
printTrianglev2(x);
}
