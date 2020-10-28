#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a = 'a';
    string arr[40];
    string b = "tormose";
    for(int i = 0; i<40; i++){
        arr[i]= a+b;
        cout<<"Hola, "<<arr[i]<<" !";
        cout<<endl;
        a++;
    }
}
