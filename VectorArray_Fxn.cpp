/*Vector Array :- vector ek dynamic array hota hai. Jaise normal array ka size fix hota hai, vector ka size automatically badh jaata hai jab aap naye elements add karte ho.

🔹 Why Use vector Instead of Array?

     Array	                                                       Vector
Fixed size (compile-time)	                            Dynamic size (run-time)
No built-in insert, erase                              	Has built-in push_back, erase, insert
Manual resizing needed	                                Automatic resizing
Limited functionality	                                STL-supported, powerful functions


Imp. Points:
->By default vector array ka size = 0 
-> and if we give size in that paranthensis () that it by default uski sari value 0 hoti h in each size of block
->Elements unknown ho ya change hone ho.
->Insertion/deletion chahiye ho.
->Zyada flexibility chahiye ho.
*/

#include <iostream>
#include <vector>    // Header file: when use vector array
#include <algorithm> // for sort, reverse
using namespace std;

int main()
{
    vector<int> v;

    // 1. Adding elements one by one
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 2. Size and capacity
    cout << "Size: " << v.size() << endl;         // 3
    cout << "Capacity: " << v.capacity() << endl; // >=3
    cout << "Max possible size of vector array: " << v.max_size() << endl;  // Very large number

    // 3. Access elements
    cout << "Element at index 1: " << v.at(1) << endl; // 20
    cout << "Front: " << v.front() << endl;            // 10
    cout << "Back: " << v.back() << endl;              // 30

    // 4. Loop through vector
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // 10 20 30
    }
    cout << endl;

    // 5. Remove last element
    v.pop_back();
    cout << "After pop_back: ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " "; // 10 20
    }
    cout << endl;

    // 6. Insert at index 1
    v.insert(v.begin() + 1, 99); // insert 99 at index 1
    cout << "After insert: ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " "; // 10 99 30
    }
    cout << endl;

    // 7. Erase element at index 0
    v.erase(v.begin());
    cout << "After erase: ";
  for (int i = 0; i < v.size(); i++){
        cout << v[i] << " "; //  20 99
    }
    cout << endl;

    // 8. Sort the vector
    sort(v.begin(), v.end());
    cout << "After sort: ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " "; //  20 99
    }
    cout << endl;

    // 9. Reverse the vector
    reverse(v.begin(), v.end());
    cout << "After reverse: ";
   for (int i = 0; i < v.size(); i++){
        cout << v[i] << " "; // 99 20
    }
    cout << endl;

    // 10. Clear the vector
    v.clear();
    cout << "Is empty?: " << v.empty() << endl; // 1

    return 0;
}
