#include<iostream>
using namespace std;
bool checkPrime(int p){
int c=0;
for(int i=1; i<=p; i++){
    if(p%i==0)
        c++;

}
  if(c==2)
    return true;
  else
    return false;
}
int main(){
int p;
cin>>p;
if(checkPrime(p)==true){
cout<<"Prime";}
else{
    cout<<"Not Prime";

}

}
