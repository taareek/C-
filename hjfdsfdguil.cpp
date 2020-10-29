#include <iostream>
using namespace std;

struct myFancyStack{
  int counter = 0;
  int maxSize = 100;
  int *elements = new int[maxSize];
};
bool isEmpty(myFancyStack &st){
  return (st.counter == 0);
}
void push(myFancyStack &st, int val){
  if(st.counter < st.maxSize){
    st.elements[st.counter++] = val;
  }
}
int pop(myFancyStack &st){
  if(!isEmpty(st)){
    return st.elements[--st.counter];
  }
}
int main(){
  myFancyStack st1;
  push(st1,1);
  push(st1,2);
  push(st1,3);
  cout<<pop(st1)<<endl;
  cout<<pop(st1)<<endl;
  cout<<pop(st1)<<endl;
  return 0;
}




