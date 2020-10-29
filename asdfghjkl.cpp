 #include <iostream>

using namespace std;
bool push(int stackT[], int *topT, int data);
int pop(int stackT[], int *topT);
void clear1(int *topT);
bool isEmpty(int *topT);
bool isFull(int *topT);
void printStack(int stackT[], int *topT);

int main()
{
    int stackT[5]; // Array to hold the elements in the stack
    int top = 0; // initial top position


    int n, ch, popped = -1;

    do
    {
      cout << endl << "Stack" << endl << "1. Insert" << endl << "2. Delete" <<endl <<"3. Display" << endl << "0. Exit";
      cout  << endl << "Enter Choice 0-3? : ";
       cin >> ch; //Enter option
        switch (ch)
        {
            case 1:
                cout <<endl <<"Enter number: ";
                cin >> n;
                push(stackT, &top, n);
                break;

            case 2:

                    popped = pop(stackT, &top);
                    if (popped != -9999)
                        cout << popped << " Popped" <<endl;

                break;

            case 3:
                printStack(stackT, &top);
                break;
            default:
                cout << "";

        }
    }while (ch != 0);
    return 0;
}

bool push(int a[], int *topT, int data) {

	if(isFull(topT) == true)  // Check whether the stack is full
            {
            cout << "Stack is full !!!";
            return false;
            }   // stack is full

	// add the element and then increment nextIn
	a[(*topT)] = data;
	(*topT)++;
	return true;
}

int pop(int stackT[], int *topT) {
	if(isEmpty(topT) == true)
        {
            cout << "Stack is Empty !!" << endl;
            return -9999;
        }   // stack is empty

	// decrement top and return the data
	(*topT)--;
	int index = (*topT);
	int  data = stackT[index];
	return data;
}

bool isEmpty(int *topT) {
	int index = (*topT);
	if (index == 0)
        return true;
	else
        return false;
}

bool isFull(int *topT) {
	int index = (*topT);
	if (index == 5)
        return true;
	else
        return false;
}

void printStack(int stackT[], int *topT)
{
    if (isEmpty(topT) == true)
        cout << "Stack is empty";
    else
    {
        int length = *topT;
        cout << "Stack:" <<endl;
        for (int i = 0; i < length; i++)
            if (i !=length - 1)
                  cout << stackT[i] << endl;
            else  cout << stackT[i] << endl <<"  <---- Top" <<endl;
    }
}
