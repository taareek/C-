#include<iostream>
using namespace std;
float avg(float, float, float);
float sum(float, float, float);
int main(){
float x, y, z;
cin>>x>>y>>z;
cout<<avg(x,y,z);
}
float sum(float a, float b, float c){
return(a+b+c);
}
float avg(float p, float q, float r){
return (p*q*r)/3.0;
}
