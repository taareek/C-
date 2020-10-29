#include<iostream>

using namespace std;

void hcfLcm(int x, int y, int &h ,int &l){

for(int i=1;i<=x ;i++){

if(x%i==0 && y%i==0)
h=i;

}

for(int i=x*y; i>=x; i--){

if(i%x==0 && i%y==0)
l=i;

}

}

int main(){

int a,b,hcf,lcm;

cin>>a>>b;

hcfLcm(a,b,hcf,lcm);

cout<<"HCF="<<hcf<<endl;

cout<<"LCM="<<lcm<<endl;
}
