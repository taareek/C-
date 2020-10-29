#include<iostream>
using namespace std;
float avg(float, float, float);
float sum(float, float, float);
int main(){
    float x=1.5, y=4.6, z=0.5;
    cout<<avg(x,y,z);
}
float sum(float a, float b, float c);{
    return(a+b+c);

}
float avg(float p, float q, float r);{
    return float(p,q,r)/3.0;
}
