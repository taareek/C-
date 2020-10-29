#include<iostream>
using namespace std;
void passPointerByReference(int* &a, int &p){
    a=&p;
}
int main(){
int x=3; int *y=&x; int p=123;
   cout<<"y is"<<y<<" &p is "<<&p<<endl;
    passPointerByReference(y,p);
    cout<<"*y is"<<*y<<" &p is "<<&p<<endl;
   return 0;
}

