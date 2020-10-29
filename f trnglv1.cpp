#include<iostream>
using namespace std;

void printTrianglev1(){
for(int i=0; i<13; i++){
    for(int j=0; j<i; j++){
        cout<<"* ";
    }
    cout<<endl;
}
}
int main(){
printTrianglev1();
}
