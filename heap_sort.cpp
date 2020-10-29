#include<iostream>
using namespace std;

void heapify(int afr[], int s, int r)
{
    int largest = r;
    int left = 2*r + 1;
    int right = 2*r + 2;

    if (left < s && afr[left] > afr[largest])
        largest = left;

    if (right < s && afr[right] > afr[largest])
        largest = right;

    if (largest != r)
    {
        swap(afr[r], afr[largest]);

        heapify(afr, s, largest);
    }
}

void heap_sort(int afr[], int s)
{
    for (int i = s / 2 - 1; i >= 0; i--)
        heapify(afr, s, i);

    for (int i=s-1; i>=0; i--)
    {
        swap(afr[0], afr[i]);

        heapify(afr, i, 0);
    }
}

void print_array(int afr[], int s)
{
    for (int j=0; j<s; j++)
        cout << afr[j] << " ";
    cout << "\n";
}


int main()
{
   int n;
   cout<<"Enter the size of array: ";
   cin>>n;
   int afr[n];
   cout<<"Enter the elements of the array: ";
   for(int k=0; k<n; k++){
    cin>>afr[k];
   }
   cout<<endl;
   cout<<"The unsorted array is: \n";
   for(int m=0; m<n; m++){
    cout<<afr[m]<<" ";
   }
   cout<<endl;
   int s = sizeof(afr)/sizeof(afr[0]);
   heap_sort(afr, s);
   cout << "The sorted array is: \n";
   print_array(afr, s);
}
