// OUICK SORT is used to solve complex problem and it is SLOWER THAN MERGE SORT
// time complexity-nlog(n) best ,average // worst case- o(n2)
// space complexity is less than the MERGE sort because it take extra array
// APPROCH = DIVIDE AND CONQURER METHOD
// INPLACE  H BECAUCE EXTRA ARRAY LIYA HAI
// stable- no  Example:
// example :Consider an unsorted array [5, 2, 8, 5, 9]. If the pivot is 5, and during partitioning, the element 5 at index 0 is swapped with the 5 at index 3, their relative order is changed even though they have the same value. 
// Quick sort m Two Pointer Approach use kiya jata h before sorting jb  pivot element milta h


#include <iostream>
using namespace std;

// Partition function for Quick Sort
int part(int arr[], int low, int high)
{
    int pv = arr[low]; // pivot element
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        // Move i forward if elements are smaller than pivot
        while (arr[i] < pv)
        {
            i++;
        }

        // Move j backward if elements are greater than pivot
        while (arr[j] > pv)
        {
            j--;
        }

        // Swap if i < j
        if (i < j)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }

    } while (i < j);

    // Swap pivot with j
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // return pivot index
}

// Recursive Quick Sort function
void qksort(int arr[], int low, int high)
{
   
    if (low < high)
    {
        int pvt = part(arr, low, high); // partition the array
        qksort(arr, low, pvt - 1);  // sort left part , isme low to vhi rhega but jo high hoga vo pivot wale k 1 pich wala hoga na 
        qksort(arr, pvt + 1, high); // sort right part , or isme low= me pivot k just next wala or high to high hi rhega
    }
}


int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nBefore sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Apply Quick Sort 
    qksort(arr, 0, n - 1);

    cout << "\n\nAfter sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}





