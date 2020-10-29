#include<iostream>
#include<climits>
using namespace std;

// Prototype of a utility function to swap two integers
void swap(int *x, int *y);


    ; // pointer to array of elements in heap

    int capacity = 10; // maximum possible size of min heap
     // Current number
    int heap_size = 0;
    int *harr = new int[capacity];
// to heapify a subtree with the root at given index
    void MinHeapify(int i);


    // to extract the root which is the minimum element
    int extractMin();

    // Decreases key value of key at index i to new_val
    void decreaseKey(int i, int new_val);
    // Returns the minimum key (key at root) from min heap
    int getMin() { return harr[1]; }
    // Deletes a key stored at index i
    void deleteKey(int i);

    // Inserts a new key 'k'
    void insertKey(int k);
    //print the heap
    void printH();




// Inserts a new key 'k'
void insertKey(int k)
{
    if (heap_size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    // First insert the new key at the end
    heap_size++;
    int i = heap_size;
    harr[i] = k;

    // Fix the min heap property if it is violated
    while (i != 1 && harr[i/2] > harr[i])
    {
       swap(&harr[i], &harr[i/2]);
       i = i/2;
    }
}

// Decreases value of key at index 'i' to new_val.  It is assumed that
// new_val is smaller than harr[i].
void decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 1 && harr[i/2] > harr[i])
    {
       swap(&harr[i], &harr[i/2]);
       i = i/2;
    }
}

// Method to remove minimum element (or root) from min heap
int extractMin()
{
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1)
    {
        heap_size--;
        return harr[1];
    }

    // Store the minimum value, and remove it from heap
    int root = harr[1];
    harr[1] = harr[heap_size];
    heap_size--;
    MinHeapify(1);

    return root;
}


// This function deletes key at index i. It first reduced value to minus
// infinite, then calls extractMin()
void deleteKey(int i)
{
    decreaseKey(i, INT_MIN);
    extractMin();
}

//print the heap using array
void printH()
{
   for (int i = 1; i < heap_size; i++)
        cout << harr[i] << "  ";
    cout <<endl;
}
// A recursive method to heapify a subtree with the root at given index
// This method assumes that the subtrees are already heapified
void MinHeapify(int i)
{
    int l = 2*i;
    int r = 2*i+1;
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i])
        smallest = l;
    if (r < heap_size && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&harr[i], &harr[smallest]);
        MinHeapify(smallest);
    }
}

// A utility function to swap two elements
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Driver program to test above functions
int main()
{

    insertKey(3);
    //printH();
    insertKey(2);
    //printH();
    insertKey(1);
    //printH();
    insertKey(15);
    //printH();
    insertKey(5);
    //printH();
    insertKey(4);
    //printH();
    insertKey(45);
    printH();
    cout<<endl;
    cout << getMin() <<endl;
    printH();
    cout<<endl;
    cout << extractMin() <<endl;
    printH();
    cout << extractMin() <<endl;
    printH();

    cout << getMin() <<endl;
    //decreaseKey(2, 1);
    printH();
    //cout << getMin();

    return 0;
}

