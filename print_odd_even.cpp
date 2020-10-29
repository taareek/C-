/*
This code will take input from user
to print odd and even number
*/

#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the number range till you want to print:";
cin>>a;
cout<<endl;
cout<<"Even: ";
for(int p=1; p<a; p++){
    if(p%2==0){
        cout<<p<<" ";
    }
}
cout<<endl;
cout<<"Odd: ";
for(int p=1; p<a; p++){
    if(p%2!=0){
        cout<<p<<" ";
    }
}


}
