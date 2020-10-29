#include<iostream>
using namespace std;
struct Student{
    string name;
    int age;
    float height;
};
void printData(Student student){
    cout<<"Name: "<<student.name<<endl;
    cout<<"Age: "<<student.age<<endl;
    cout<<"Height: "<<student.height<<endl;
}
int main(){
    Student tarek={"MD. TAREK AZIZ", 22, 5.9};
    Student meghna={"FATEMA SAGUPTA MEGHNA", 21, 5.6};
    printData(tarek);
    cout<<endl;
    printData(meghna);

    return 0;
}
