#include<iostream>
using namespace std;
int hcf(int x, int y){
int hcf;
for(int i=1; i<=x; i++){
    if(x%i==0 && y%i==0){
        hcf=i;
    }
}
return hcf;
}
int main(){
int x,y,c;
cin>>x>>y;
c=hcf(x,y);
cout<<"HCF="<<c;
}
