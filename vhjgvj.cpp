#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int A[3][5];
srand(time(0));
for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
        A[i][j]=  rand()%10;
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}

}
