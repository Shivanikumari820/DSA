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

void selection(int arr[], int s)
{
    int count = 0;

    int j;
    for (int i = 0; i < s - 1; i++)
    {
        int chotu = i;
      
        for (j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[chotu])
            {
                chotu = j;
            }
        }
        if (chotu != j)
        {
            int tmp;
            tmp = arr[chotu];
            arr[chotu] = arr[i];
            arr[i] = tmp;
              count++;
        }
    }
    cout << count << endl;
}

int main()
{

    int arr[] = {2, 1, 7, 9, 5};
    int s = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";

    selection(arr, s);
    cout << "\n after selection sort\n";
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}