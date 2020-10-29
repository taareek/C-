#include<iostream>
using namespace std;

int factorial(int); /*Prototype*/

int main(){
int x,y;
cout<<"Enter a number: ";
cin>>x;
y=factorial(x);
cout<<x<<"!= "<<y;

}
int factorial(int n){
int f=1;
for(int i=1; i<=n; i++){
    f=f*i;
}
return f;
}
