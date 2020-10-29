#include <iostream>
using namespace std;

void printGrades(int *grades[2], int numOfYear,int numofSubjects)
{
    for(int i =0; i<numOfYear;++i)
    {
for(int j =0; j< numofSubjects ; ++j)
            {
            cout<<grades[i][j]<<" ";
            }
            cout<<endl;
}
}

int main()
{
int numOfYear = 2;
int numOfSubjects = 4;

     int *grades[numOfYear];


//Space allocation
for(int i=0;i < numOfYear; ++i){

grades[i] = new int(numOfSubjects);

//Checking whether there is actually space
if (grades[i] == NULL) {return -1;}
}


    //Value initialization
    for(int i=0;i < numOfYear; ++i){
        for(int j=0; j <numOfSubjects; ++j){
            grades[i][j] = (i+j);
        }
     }
//Function call
printGrades(grades,numOfYear,numOfSubjects);

//In C++ freeing memory
     for(int i=0; i<numOfYear; ++i)delete[]grades[i];
return 0;
}


