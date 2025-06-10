// Merge SORT is used to solve complex problem to break into small partition and it is BETTER THAN QUICK SORT
// THE TIME complexity IN average CASE ,  WORST CASE ,BEST CASE IS ALWAYS = Same,   Time complexity = O(nlogn)
// space  complexity = is higher than Quick sort because it take extra array
// APPROCH = DIVIDE AND CONQURER METHOD
// INPLACE NHI H BECAUCE EXTRA ARRAY LIYA HAI
// IT IS STABLE,  This means that if two elements are equal, their relative order in the sorted output will be the same as their relative order in the original input. 
// Merge krne k liye Two Pointer Approach use kiya jata h 

#include<iostream>
using namespace std;

void merges(int arr[], int low, int mid, int high) {
    int b[high + 1];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            b[k] = arr[i];
            i++;
        } 
        else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
//for remaining elements --->> 
    while (i <= mid) {             //for L.H.S
        b[k] = arr[i];
        i++;
        k++; 
    }
      
    while (j <= high) {             //for R.H.S
        b[k] = arr[j];              
        j++;
        k++;
    }

//Copy the auxillary array into original array 
    for (int i = low; i <= high; i++) {
        arr[i] = b[i];
    }
}

void msort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        msort(arr, low, mid);
        msort(arr, mid + 1, high);
        merges(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    msort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
