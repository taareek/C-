#include<iostream>
using namespace std;
struct myQ{
    int maxSize= 100;
    int head=0;
    int tail=0;
    int*elements= new int [maxSize];
};

bool isEmpty(myQ & s){
    if(s.head==s.tail) return true;
    return false;
}
void enqueue(myQ & s, int val){
     if(s.tail<s.maxSize){
        s.elements[s.tail++]= val;
     }
}
int dequee(myQ &s){
    if(!isEmpty(s) && s.head<s.maxSize){
       int result= s.elements[s.head++];

        return result;
 }
}
int main(){
     myQ s;
     enqueue(s, 1);
     enqueue(s, 2);
     enqueue(s, 3);
     cout<<dequee(s)<<endl;
     cout<<dequee(s)<<endl;
     cout<<dequee(s)<<endl;
    return 0;
}
