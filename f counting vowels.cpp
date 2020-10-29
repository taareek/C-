#include<iostream>
using namespace std;

int countVowel(string s){
int v=0;
for(int i=0; i<s.size();i++){
    if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        v++;
}
return v;
}
int main(){
string w;
getline(cin,w);
cout<<"Number of vowels= "<<countVowel(w);
}
