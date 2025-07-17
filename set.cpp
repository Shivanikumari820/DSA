// What is set in C++?
// A `set` in C++ is a part of the Standard Template Library (STL) that represents a collection of unique elements, typically implemented as a balanced binary search tree. It automatically sorts the elements and ensures that no duplicate values are stored. The `set` provides various operations such as insertion, deletion, and searching for elements, all of which are generally performed in logarithmic time complexity.

#include <iostream>
#include <set> // Header file for set
using namespace std;

int main()
{
    set<int> mySet; // Declare a set of integers

    // Inserting elements into the set
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(8);
    mySet.insert(1);
    mySet.insert(5); // Duplicate element (will be ignored)

    // Displaying the elements of the set
    cout << "Elements in the set: ";
    for (auto p : mySet)
    {
        cout << p << " ";
    }
    cout << endl;

    //   mySet.erase(8); // Deleting an element from the set
    //     cout << "Elements after deletion: ";
    //     for (auto p : mySet) {
    //         cout << p << " ";                            //it create segmentation fault if we try to access deleted element beacuse data is not present in set
    //     }
    //     cout << endl;

    mySet.find(8); // Searching for an element in the set , it also create segmentation faultif we find element which is not present in set
                   // The find function returns an iterator to the element if it exists in the set.
                   // If the element is found, it returns an iterator to the element; otherwise, it returns mySet.end()
                   // We can check if the element exists by comparing the iterator with mySet.end()
                   // Using auto to handle the iterator returned by find
                  // To handle segmentation fault we use pointers.
    auto p = mySet.find(8);
    if (p != mySet.end())
    {
        cout << "Element " << *p << " found in the set." << endl;
    }
    else
    {
        cout << "Element not found in the set." << endl; // If the element is not found
    }

    return 0;
}


// erase () function is used to delete all same data in set 
// we used erase with find function to delete specific element because find returns an iterator to the element, which can be passed to erase.



//Multiset in C++ = A `multiset` in C++ is similar to a `set`, but it allows duplicate elements. It is also part of the Standard Template Library (STL) and maintains the order of elements while allowing multiple occurrences of the same value. Like `set`, `multiset` is implemented as a balanced binary search tree.

// multiset<int> myMultiSet; // Declare a multiset of integers

//     // Inserting elements into the multiset
//     myMultiSet.insert(5);
//     myMultiSet.insert(2);
//     myMultiSet.insert(8);
//     myMultiSet.insert(1);
//     myMultiSet.insert(5); // Duplicate element (will be stored)

//     // Displaying the elements of the multiset
//     cout << "Elements in the multiset: ";
//     for (auto p : myMultiSet)
//     {
//         cout << p << " ";
//     }
//     cout << endl;

//     // Deleting an element from the multiset
//     myMultiSet.erase(5); // This will remove all occurrences of 5
//     cout << "Elements after deletion: ";
//     for (auto p : myMultiSet)
//     {
//         cout << p << " "; // It will not create segmentation fault as it removes all occurrences of 5
//     }
//     cout << endl;

//     return 0;
// }


