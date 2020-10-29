#include<iostream>
 #include<cstring>
 #include<string.h>
 using namespace std;

 int lcs(string a, string b, int l1, int l2)
 {
     int arr[l1+1][l2+1];
     for(int i=1; i<=l1; i++){
        for(int j=0; j<=l2; j++){
            if(a[i-1] == b[j-1]){
                arr[i][j]= 1+ arr[i-1][j-1];
            }else{
            arr[i][j]= max(arr[i-1][j], arr[i][j-1]);
             }

        }
     }
     return arr[l1][l2];
 }

 int main()

 {
    string a= "abcdefg";
    string b= "abcttfk";
    int la= a.size();
    int lb= b.size();
    int d= lcs(a,b,la,lb);
    cout<<"The lcs is: "<<d;
    return 0;

 }
