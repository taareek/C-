#include<iostream>
#include<cstring>
using namespace std;

int lcs(string s1, string s2){
    int l1= s1.length();
    int l2= s2.length();

    int lcs_array[l1+1][l2+1];

    for(int i=0; i<=l1; i++){
        for(int j=0; j<=l2; j++){
            lcs_array[i][j]=0;
        }

    }
    for(int i=1; i<=l1; i++){
        for(int j=1; j<=l2; j++){
            if(s1[i-1]== s2[j-1]){
                lcs_array[i][j]= 1+ lcs_array[i-1][j-1];
            }else{
                lcs_array[i][j]= max(lcs_array[i-1][j], lcs_array[i][j-1]);

            }


        }

    }
    return lcs_array[l1][l2];
}

int main(){
    string s1, s2;
    cout<<"Enter your first string: ";
    getline(cin, s1);
    cout<<"\nEnter your second string: ";
    getline(cin, s2);

    cout<<"\nLongest common subsequence between two string is: "<<lcs(s1,s2);


    return 0;
}
