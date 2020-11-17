//Here is some void and non-void functions using 0,1 and more than 1 parameters
//with pass by value and pass by references

#include<iostream>
using namespace std;

void printGoodMorning()
{
    cout<<"Good Morning"<<endl;
}

int *printOddNumbersZeroToFifty()
{
    int arr[51];
    for(int a =0; a<51; a++)
    {
        arr[a] = a;
        if (arr[a]%2 != 0)
        {
            cout<<arr[a]<<" ";
        }
    }
    return arr;
}

void guessOddOrEven(int x)
{
    if(x%2 == 0)
    {
        cout<<"The given number is Even"<<endl;
    }else{
        cout<<"The given number is Odd"<<endl;
    }
}

void changeValue(int *r)
{
    *r = *r+12;
    cout<<"The changed value is: "<<*r<<endl;
}

int countDigit(int y)
{
    int c = 0;
    while(y!= 0)
    {
        y = y/10;
        c++;
    }
    return c;
}

float getSquareOfNumber(float &t)
{
    t = t*t;
    return t;
}

void printLargest(int a, int b)
{
    if(a>b)
    {
        cout<<"The largest number is: "<<a<<endl;
    }else{
        cout<<"The largest number is: "<<b<<endl;
    }
}

void printLowest(int *a, int *b)
{
    if(*a>*b)
    {
        cout<<"The lowest number is: "<<*b<<endl;
    }else{
        cout<<"The lowest number is: "<<*a<<endl;
    }
}

int calculateHcf(int x, int y)
{
    int hcf;
    for (int i = 1; i <= x && i <= y; i++)
   {
      if (x % i == 0 && y % i == 0)
         hcf = i;
   }
   return hcf;
}

float calculateAvg(float& p, float& q, float& r)
{
    return (p+q+r)/3;
}

int main()
{
//void function with zero parameters
    printGoodMorning();
//non-void function with zero parameter
    int *t = printOddNumbersZeroToFifty();
//void  function with one parameter
    int k;
    cout<<"\nEnter a number to see odd or even: ";
    cin>>k;
    guessOddOrEven(k);
    int l;
    cout<<"Enter a number to change the value: ";
    cin>>l;
    changeValue(&k);
//non-void function with one parameter
    int e;
    cout<<"Enter a number to count digits: ";
    cin>>e;
    cout<<"The digits of this number is: "<<countDigit(e)<<endl;
    float v;
    cout<<"Enter a number to get square: ";
    cin>>v;
    cout<<"The square of this number is: "<<getSquareOfNumber(v)<<endl;
//void function for two parameter
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    printLargest(a,b);
    printLowest(&a,&b);
//non-void function with two parameter
    cout<<"HCF of those numbers is: "<<calculateHcf(a,b);
    float g,h,j;
    cout<<"\nEnter three numbers to get average: ";
    cin>>g>>h>>j;
    cout<<"\nAverage of those numbers: "<<calculateAvg(g,h,j);

    return 0;

}
