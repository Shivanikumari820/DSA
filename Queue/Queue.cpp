// what is Queue = A queue is a data structure that follows the First In First Out (FIFO) principle, meaning the first element added to the queue will be the first one to be removed. It is commonly used in scenarios where order of processing is important, such as task scheduling or managing requests.
// Example of queue in C++ = In C++, the queue is implemented using the STL (Standard Template Library) and can be used to manage collections of elements efficiently. The queue provides operations like enqueue (adding an element), dequeue (removing an element), and checking if the queue is empty. 


#include <iostream>
#include <queue>    
using namespace std;
int main() {
    queue<int> q;

// Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.size(); 
    cout << "Queue size: " << q.size() << endl;     // Returns the number of elements in the queue

    cout<< "Front element: " << q.front() << endl; 
    cout << "Back element: " << q.back() << endl;   

    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " "; // Accessing the front element
        q.pop();                  // Removing the front element
    }
    cout << endl;

    return 0;
}

