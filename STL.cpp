/*
STL- Standard template library
-> STL is a collection of predefined classes and functions in C++ to help with data structures and algorithms.
-> it is a powerful set of c++ template classes and function, that are commonly used algorithm and DSA.
-> it is a library of container classes , algorithms and iterators(pointer).

🔷 STL has 3 Main Components:
Component	                Description
1⃣ Containers =   	Store data in various structures (like vector, array, map)
2⃣ Algorithms = 	Ready-to-use functions for sorting, searching, etc.
3⃣ Iterators =	    Used to traverse containers like pointers


1. Containers :--   containers are used to manage collection of objects of a certain kinds
there are 3 types of containers :-
📂 Types of Containers:
1.Sequence Containers → Linear storage ,  it can be accesed in sequential manner(like arrays, vector, list, deque)
2.Associative Containers → Sorted & fast lookup (map, set)
3.Container Adaptors → Modified interface (stack, queue, etc.)

*/

// Static Array using STL

#include <iostream>
#include <array> // Required for std::array
using namespace std;

int main()
{
    array<int, 5> arr = {3, 4, 5, 7, 8}; // A static array of 5 integers

    cout << "Size: " << arr.size() << "\n"; // Output: 5

    cout << "Elements:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << "\n"; // Accesses element at index i
    }

    return 0;
}

//  Dynamic Array using STL

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr;

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    cout << "Output:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*  Commonly Used Functions of array in STL

| Function            | Purpose                             |
| ------------------- | ----------------------------------- |
| .size()             | Returns the number of elements      |
| .at(i)              | Safe access to element at index `i` |
| .front()            | First element                       |
| .back()             | Last element                        |
| .fill(x)            | Fill entire array with value `x`    |
| .begin()/.end()     | Used for loops or algorithms        |
*/

