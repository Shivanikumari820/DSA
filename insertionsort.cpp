//  Time complexity avg worst = O(N^2)
// space  complexity = O(1)
// APPROCH = SUBTRACT AND CONQURER METHOD 
// INPLACE BECAUCE EXTRA ARRAY NHI LIYE HAI 
// structerd based
// IT IS STABLE  yes ??

#include<iostream>
using namespace std; 


void insertionSort(int arr[], int s) {
    int count =0;
    for(int i = 1; i < s; i++) {

        int mins = i;
        while(mins > 0 && arr[mins] < arr[mins - 1]) {
            int temp = arr[mins];
            arr[mins] = arr[mins - 1];
            arr[mins - 1] = temp;
            mins--;
            count++;
        }
    }
     cout << "\nCounter Hit: " << count << endl;
}

int main() {
    int arr[] = {3, 4, 5, 6, 7,2};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Before applying insertion sort:\t";
    for(int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    insertionSort(arr, s);

    cout << "After applying insertion sort:\t";
    for(int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
