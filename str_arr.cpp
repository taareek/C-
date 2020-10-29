#include<iostream>
#include<cstring>
using namespace std;
/*struct beadob{
    int id;
    string name;
    int marks;
};
int main(){
    struct beadob arr[2];
    for(int i=0; i<2; i++){
        cout<<"Enter ID: ";
        cin>>arr[i].id;
        cout<<"\nEnter name: ";
        cin>>arr[i].name;
        cout<<"\nEnter marks: ";
        cin>>arr[i].marks;
    }
       for(int i=0; i<2; i++){
        cout<<"ID: "<<arr[i].id;
        cout<<endl;
        cout<<"\nName: "<<arr[i].name;
        cout<<"\nMarks: "<<arr[i].marks;
    }
}
*/
 struct student
{
	int roll_no;
  	string name;
  	int phone_number;
};

void display(struct student dd)
{
  	cout << "Roll no : " << dd.roll_no << endl;
  	cout << "Name : " << dd.name << endl;
  	cout << "Phone no : " << dd.phone_number << endl;
}

int main(){
	struct student s;
  	s.roll_no = 4;
  	s.name = "Ron";
  	s.phone_number = 888888;
  	display(s);
	return 0;
}
