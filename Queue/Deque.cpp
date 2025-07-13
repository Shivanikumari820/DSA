// What is DEQUE? = A deque (double-ended queue) is a data structure that allows insertion and deletion of elements from both ends, providing flexibility in managing collections of items. It is often used when you need efficient access to both the front and back of a sequence.
#include <iostream>
#include <deque>  // Include the deque header   
using namespace std;
int main() {
    deque<int> dq;

    // Adding elements to the front and back
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_back(30);

    cout << "Deque elements: ";
    for (auto num : dq) {
        cout << num << " ";
    }
    cout << endl;

    // Accessing front and back elements
    cout << "Front element: " << dq.front() << endl;  
    cout << "Back element: " << dq.back() << endl;    

    // Removing elements from the front and back
    dq.pop_front();
    dq.pop_back();

    cout << "Deque after popping front and back: ";
    for (auto num : dq) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// deque support two pointer or not  like a.begin and a.end = Yes, a deque supports two pointers like `begin()` and `end()`, which allow you to iterate through the elements of the deque efficiently. You can use these pointers to access the first and last elements, as well as to traverse the entire deque.
// deque support for loop or not = Yes, a deque supports range-based for loops, allowing you to iterate through its elements easily. This is similar to how you would use a for loop with other STL containers like vectors or lists.
// deque support iterator or not = Yes, a deque supports iterators, which allow you to traverse its elements in a way similar to other STL containers. You can use iterators to access and manipulate the elements of the deque, providing flexibility in how you work with the data structure.
// deque support random access or not = No, a deque does not support random access in the same way that a vector does. While you can access elements using indices, the performance of accessing elements by index is generally slower than with vectors due to the underlying data structure of deques, which is optimized for efficient insertion and deletion at both ends rather than random access.
// deque support push_back or not = Yes, a deque supports the `push_back` operation, which allows you to add elements to the back of the deque efficiently. This is one of the primary operations provided by the deque data structure.
// deque support push_front or not = Yes, a deque supports the `push_front` operation, which allows you to add elements to the front of the deque efficiently. This is one of the key features that distinguishes deques from other containers like vectors, which only allow adding elements to the back.
// deque support pop_back or not = Yes, a deque supports the `pop_back` operation, which allows you to remove elements from the back of the deque efficiently. This is a standard operation provided by the deque data structure.
// deque support pop_front or not = Yes, a deque supports the `pop_front` operation, which allows you to remove elements from the front of the deque efficiently. This is one of the key operations that makes deques versatile for managing collections of items.
// deque support front or not = Yes, a deque supports the `front` operation, which allows you to access the first element of the deque efficiently. This is useful for retrieving or modifying the element at the front without removing it.
// deque support back or not = Yes, a deque supports the `back` operation, which allows you to access the last element of the deque efficiently. This is useful for retrieving or modifying the element at the back without removing it.