// Approch= Subtract and conqurer method 
// this is structerd and value based 
//space complexity= o(n)
// time complexity
// best case = o(n)
// average case = o(n^2)
// worst case = o(n^2)

#include <iostream>
using namespace std;

void bubbles(int arr[], int s)
{
    int temp, count = 0;

    for (int i = 0; i < s; i++)
    {
        int d = 0 ;

        for (int j = 0; j < s - i - 1; j++)
        {
          
            count++;
            if (arr[j] > arr[j + 1])
            {
                // swap by temporary variable
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // d = true;
                d = 1;
            }
        }
        // if (d == false)
        if(d == 0)

        {
            break; // Optimization bnane k liye : Because array is already sorted
        }
    }

    cout << "Counter hit: " << count << endl;
}

int main()
{
    int s;
    cout << "Enter the size of array : ";
    cin >> s;

    if (s <= 0)
    {
        cout << "Please enter a valid size." << endl;
    }
    else if (s < 2)
    {
        cout << "Please enter a size greater than or equal to 2" << endl;
    }
    else if (s > 10)
    {
        cout << "Overflow of array." << endl;
    }
    else
    {
        int arr[s];
        cout << "Enter " << s << " elements:\n";
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
        }

        bubbles(arr, s);

        cout << "Sorted array ";
        for (int i = 0; i < s; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

