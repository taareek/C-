#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
    cout<<"\t\tBismillhir Rahmanir Rahim"<<endl;
    string A= "Gate 1", B= "Gate 2", C= "Gate 3";
    string d,e,f;
    cout<<"\tEnter your choice to open the the gate between (1-3): ";
    int n;
    cin>>n;
    switch(n){
    case 1:
        cout<<"\tYou have chosen "<<A<<endl;
         d= "\t       Ooops! This gate is empty.    ";
         A= d;
         e= "\t       Congratulations! You have won the prize.     ";
         B= e;
         f= "Empty";
         C= f;
         cout<<endl;
         cout<<"\tNote: Gate 3 is "<<C<<endl<<endl;
         cout<<"   #Do you want to change your given choice? "<<endl;
         cout<<"\tEnter your choice between 1 & 0 (where 1 is Yes and 0 is No): ";
         int m;
         cin>>m;
         cout<<endl;
         if(m==1){
            cout<<B<<endl;
         }else{
             cout<<A<<endl;
         }

        break;
    case 2:
        cout<<"\tYou have chosen "<<B<<endl;
         d= "\t       Ooops! This gate is empty.    ";
         A= d;
         e= "\t       Congratulations! You have won the prize.     ";
         B= e;
         f= "Empty";
         C= f;
         cout<<endl;
         cout<<"\tNote: Gate 3 is "<<C<<endl<<endl;
         cout<<"   #Do you want to change your given choice? "<<endl;
         cout<<"\tEnter your choice between 1 & 0 (where 1 is Yes and 0 is No): ";
         int o;
         cin>>o;
         cout<<endl;
         if(o==1){
            cout<<A<<endl;
         }else{
             cout<<B<<endl;
         }

        break;
    case 3:
        cout<<"\tYou have chosen "<<C<<endl;
         d= "\t       Ooops! This gate is empty.    ";
         C= d;
         e= "\t       Congratulations! You have won the prize.     ";
         B= e;
         f= "Empty";
         A= f;
         cout<<endl;
         cout<<"\tNote: Gate 1 is "<<A<<endl<<endl;
         cout<<"   #Do you want to change your given choice? "<<endl;
         cout<<"\tEnter your choice between 1 & 0 (where 1 is Yes and 0 is No): ";
         int p;
         cin>>p;
         cout<<endl;
         if(p==1){
            cout<<B<<endl;
         }else{
             cout<<C<<endl;
         }

        break;



    }
}
