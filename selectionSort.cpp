// SELECTION SORT IS SLOWER THAN BUBBLE SORT IT TAKES MORE TIME TO COMPARE THE VALUES AND
// THE TIME complexity IN average CASE ,  WORST CASE ,BEST CASE
// IS ALWAYS

// Time complexity = O(N^2)
// space  complexity = O(1)
// APPROCH = SUBTRACT AND CONQURER METHOD
// INPLACE BECAUCE EXTRA ARRAY NHI LIYE HAI
// structerd based
// IT IS STABLE
// selection sort

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 1, 7, 9, 5};
    int chotu;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        chotu = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[chotu] > arr[j])
            {
                chotu = j;
            }
        }
        if (chotu != i)
        {
            int tmp;
            tmp = arr[chotu];
            arr[chotu] = arr[i];
            arr[i] = tmp;
        }
    }

    cout << "\n after selection sort\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}