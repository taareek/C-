#include <iostream>
#include<cstdlib>
using namespace std;

struct myFancyQueue{
  int maxSize = 100;
  int head = 0;
  int tail = 0;
  char *elements = new char[maxSize];
};

bool isEmpty(myFancyQueue &q){
    if(q.head == q.tail)return true;
    return false;
}

void enqueue(myFancyQueue &q,char val){
    if(q.tail<q.maxSize){
        q.elements[q.tail++] = val;
    }
}

char dequeue(myFancyQueue &q){
    if(!isEmpty(q) && q.head<q.maxSize){
        char result = q.elements[q.head++];
        return result;
    }
}

int main(){

  myFancyQueue q;
   enqueue(q, 'A');
   cout<<dequeue(q)<<endl;
   enqueue(q, 'b');
   cout<<dequeue(q)<<endl;
   enqueue(q, 'c');
   cout<<dequeue(q)<<endl;
   enqueue(q, 'd');
   cout<<dequeue(q)<<endl;
  return 0;
}


