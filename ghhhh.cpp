 #include<iostream>
 #include<cstdlib>
 #include<ctime>
 using namespace std;
/* void passByValue(int *a)
{
 *a = 31;
}
int main()
{
    int x = 3;
    int *y=&x;
    passByValue(y);
    cout<<"x is "<<y<<endl;
}
*/
/*void passPointerByReference(int* &a, int& p){
    a = &p;
}
int main(){
int x = 3;
     int *y= &x;
    int p = 123;
   cout<<"y is"<<y<<" *y is "<<*y<<endl;
    passPointerByReference(y,p);
    cout<<"y is"<<y<<" *y is "<<*y<<endl;
   return 0;
}
*/
/*
int main(){
   int N=100;
   int oddArr[N];
   //Initialization
   for(int i=0; i<N; i++){
    oddArr[i]= (2*i+1);
cout<<oddArr[i]<<" ";
   }
   //address
   cout<<&oddArr[0]<<endl;
    cout<<&oddArr[12]<<endl;
     cout<<&oddArr[34]<<endl;
      cout<<&oddArr[20]<<endl;
//pointer
int *p=& oddArr[0];
cout<<p<<endl;
cout<<*p<<endl;
p++;
cout<<p<<endl;
cout<<*p<<endl;
p++;
//Try
cout<<(*p)++<<endl;

  return 0;
}
*/
/*int main(){
    int num;
cout <<"Please enter number of even numbers";
cin >> num;
int *evenNumber = new int[num];
if (evenNumber== NULL) cout<<"Error"<<endl;
for (int n=0; n<num; n++) {
*(evenNumber+n) = (2*n+2);
//evenNumber[n] = (2*n+2);
}

for (int n=0; n<num; n++) {
cout<<*(evenNumber+n) << ", ";
//cout<<evenNumber[n];
}
delete[] evenNumber;

}
*/
/*int main(){
    int n,m ;
    cout<<"Enter the size of array: "<<endl;
    cin>>n>>m;
    int A[n][m];
    srand(time(0));
    for(int i=0; i<n; i++){
          for(int j=0; j<m; m++){
            A[i][j]=rand()%10;
          }
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
     }
     return 0;
}
*/

/*void zauraXahid(int clc[][5], int siz, int yr){
    for(int i=0; i<yr; i++ ){
        for(int j=0; j<siz; j++){
            cout<<clc[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int yr= 2;
    int siz=5;
    int clc[2][5]={
        { 36, 34, 32, 44, 38},
         {44, 42, 46, 36, 34}
        };
        cout<<"Adventure of Xahid: "<<endl;
    zauraXahid(clc,siz,yr);
}
*/
void printArr(int *grades[3], int numy, int nums){
    for(int i=0; i<numy; i++){
        for(int j=0; j<nums; j++){
            cout<<grades[i][j]<<" ";
                  }
                  cout<<endl;
    }
}
int main(){
    int numy=3; int nums=5;
    int *grades[numy];
    for(int i=0; i<numy; i++){
        grades[i]= new int[nums];
        if(grades[i]==NULL){return 0;}
    }
    //value initialization
    for(int i=0; i<numy; i++){
        for(int j=0; j<nums; j++){
            grades[i][j]=i+j;
                  }
    }

    printArr(grades,numy,nums);
    for(int i=0; i<numy; i++){
        delete[] grades[i];

    }
    return 0;
}



