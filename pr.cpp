#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <sstream>
using namespace std;

void displayArray(int arr[], int sz)
{
  for(int i =0; i<sz; ++i)
    cout<<arr[i]<<" ";

  cout<<endl;
}

void insertElement(int arr[], int key, int value, int sz)
{
  if(key>sz) return ;
  if(key<0) return ;
  arr[key] = value;
  displayArray(arr,sz);
}
bool findAnElement(int arr[], int value, int sz)
{
  for(int i =0;i<sz; ++i){
    if(arr[i] == value){
      return true;
    }
  }
  return false;
}
int main()
{
  int arr[5] = {10,20,30,40,60};
  int key =2; int value = 77; int sz = 5;
  insertElement(arr,key,value,sz);
  cout<<findAnElement(arr,2,sz)<<endl;
  return 0;
}








