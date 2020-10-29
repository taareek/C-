#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Even: ";
for(int p=1; p<100; p++){
    if(p%2==0){
        cout<<p<<" ";
    }
}
cout<<endl;
cout<<"Odd: ";
for(int p=1; p<100; p++){
    if(p%2!=0){
        cout<<p<<" ";
    }
}


}
