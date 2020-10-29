#include <iostream>

using namespace std;
bool push(int stack1[], int *top1, int data);
int pop(int stack1[], int *top1);
void clear1(int *top1);
bool isEmpty(int *top1);
bool isFull(int *top1);
void printStack(int stack1[], int *top1);
void countPosNeg(int stack1[], int *top);
int main()
{
    int stack1[5]; // Array to hold the elements in the stack
    int stack2[5];
    int top = 0; // initial top position


    int n, ch, popped = -1;

    do
    {
      cout << endl << "Stack" << endl << "1. Insert" << endl << "2. Delete" <<endl <<"3. Display" <<endl<<"4. Display replace"<< endl << "0. Exit";
      cout  << endl << "Enter Choice 0-3? : ";
       cin >> ch; //Enter option
        switch (ch)
        {
            case 1:
                cout <<endl <<"Enter number: ";
                cin >> n;
                push(stack1, &top, n);
                break;

            case 2:

                    popped = pop(stack1, &top);
                    if (popped != -9999)
                        cout << popped << " Popped" <<endl;

                break;

            case 3:
                printStack(stack1, &top);
                break;

            case 4:
                countPosNeg(stack1, &top);
            default:
                cout << "";

        }
    }while (ch != 0);
    return 0;
}

bool push(int a[], int *top1, int data) {

	if(isFull(top1) == true)  // Check whether the stack is full
            {
            cout << "Stack is full !!!";
            return false;
            }   // stack is full

	// add the element and then increment nextIn
	a[(*top1)] = data;
	(*top1)++;
	return true;
}

int pop(int stack1[], int *top1) {
	if(isEmpty(top1) == true)
        {
            cout << "Stack is Empty !!" << endl;
            return -9999;
        }   // stack is empty

	// decrement top and return the data
	(*top1)--;
	int index = (*top1);
	int  data = stack1[index];
	return data;
}

bool isEmpty(int *top1) {
	int index = (*top1);
	if (index == 0)
        return true;
	else
        return false;
}

bool isFull(int *top1) {
	int index = (*top1);
	if (index == 5)
        return true;
	else
        return false;
}

void printStack(int stack1[], int *top1)
{
    if (isEmpty(top1) == true)
        cout << "Stack is empty";
    else
    {
        int length = *top1;
        cout << "Stack:" <<endl;
        for (int i = 0; i < length; i++)
            if (i !=length - 1)
                  cout << stack1[i] << endl;
            else  cout << stack1[i] << endl <<"  <---- Top" <<endl;
    }
}
void countPosNeg(int stack1[], int *top1) {
    int pos=0, neg=0;
	if(isEmpty(top1) == true)
        {
            cout << "Stack is Empty !!" << endl;

        }   // stack is empty

	// decrement top and return the data
	(*top1)--;
	int index = (*top1);
	int  data = stack1[index];
    if(data>0){
        pos++;
    }else{
    neg++;
    }
    cout<<"Positive Numbers: "<<pos<<endl;
    cout<<"Negative Numbers: "<<neg<<endl;
}
