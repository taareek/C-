#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream infile;
    ofstream outfile;
    infile.open("copy.cpp");
    if(!infile){
        cout<<"input file open failed.\n";
    }
    outfile.open("output.txt");
    if(!outfile){
        cout<<"Output file open failed.\n";
        return -1;
    }

    //Making a copy
    char ch;
    while(infile){
        infile.get(ch);
        cout<<ch;
        outfile<<ch;
    }
    return 0;
}
