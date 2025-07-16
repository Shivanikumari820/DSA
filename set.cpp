// What is set in C++?
// A `set` in C++ is a part of the Standard Template Library (STL) that represents a collection of unique elements, typically implemented as a balanced binary search tree. It automatically sorts the elements and ensures that no duplicate values are stored. The `set` provides various operations such as insertion, deletion, and searching for elements, all of which are generally performed in logarithmic time complexity.


#include <iostream>
#include <set> // Header file for set
using namespace std;

int main() {
    set<int> mySet; // Declare a set of integers

    // Inserting elements into the set
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(8);
    mySet.insert(1);
    mySet.insert(5); // Duplicate element (will be ignored)

    // Displaying the elements of the set
    cout << "Elements in the set: ";
    for (auto p : mySet) {
        cout << p << " ";
    }
    cout << endl;


    return 0;
}

