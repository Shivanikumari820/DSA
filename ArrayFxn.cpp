#include <iostream>
#include <array>
#include <algorithm>  // for sort, reverse, etc.
using namespace std;

int main() {
    array<int, 5> arr = {10, 20, 30, 40, 50};

    cout << "1. Size: " << arr.size() << endl;                // 5
    cout << "2. First Element: " << arr.front() << endl;      // 10
    cout << "3. Last Element: " << arr.back() << endl;        // 50
    cout << "4. Element at index 2: " << arr.at(2) << endl;   // 30
    cout << "5. Is empty?: " << arr.empty() << endl;          // 0 (false)

    cout << "6. Before sort: ";
    for (int i : arr) cout << i << " ";                       // 10 20 30 40 50
    cout << endl;

    reverse(arr.begin(), arr.end());
    cout << "7. After reverse: ";
    for (int i : arr) cout << i << " ";                       // 50 40 30 20 10
    cout << endl;

    sort(arr.begin(), arr.end());
    cout << "8. After sort: ";
    for (int i : arr) cout << i << " ";                       // 10 20 30 40 50
    cout << endl;

    arr.fill(100);
    cout << "9. After fill(100): ";
    for (int i : arr) cout << i << " ";                       // 100 100 100 100 100
    cout << endl;

    return 0;
}
