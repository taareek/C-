#include<iostream>
#include<string>
using namespace std;
class Us{
public:
    string name;
    int bd;
    string bm;
    int by;
    string st;
    void print(){
       cout<<"Name: "<<name<<endl;
       cout<<"Birthday: "<<bd<<" ";
       cout<<bm<<" in ";
       cout<<by<<endl;
       cout<<"Marital Status: "<<st<<endl;

    }
};
int main(){
    Us tarek{ "MD. TAREK AZIZ", 30, "August", 1996, "Unmarried"};
    Us meghna{"FATEMA SAGUPTA MEGHNA", 31, "March", 1998,"Unmarried"};
    tarek.print();
    cout<<endl<<endl;
    meghna.print();
    return 0;
}
