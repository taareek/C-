#include<iostream>
using namespace std;
float areaOfcircle(float r){
float a=3.1416*r*r;
return a;
}
int main(){
float x,y;
cin>>x;
y=areaOfcircle(x);
cout<<"Area="<<y;
}
