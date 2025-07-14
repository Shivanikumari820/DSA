// what is map = it is called associative container
// it is used to store key-value pairs.
// it is used to store data in sorted order means ascending order.
// it is used to store unique keys but value can be duplicate.
// it is also called self balancing binary search tree.
// there are two type :- ordered map and unordered map.
// ordered map = it is used to store data in sorted order.
// unordered map = it is used to store data in unsorted order.


// #include <iostream>
// #include <map> // Header file for map
// using namespace std;

// int main() {
//     // Creating a map
//     map<int, string>m;

//     // Inserting elements into the map  by different methods
//     m[101] = "One";
//     m.insert({102, "Two"});
//     m.insert(make_pair(103, "Three"));
//     m[104] ;     // by default ye null value assign karega because m[5] is not present in map or ye null value assign karega

//     for(auto p : m) {
//         cout << p.first << " : " << p.second << endl; // Output key-value pairs
//     }

//     cout<<endl;


//     //Deleting an element
//     m.erase(102); // Removes the element with key 102

//       for(auto p : m) {
//         cout << p.first << " : " << p.second << endl; // Output key-value pairs
//     }


//     // isme upr wale m pta kese chlega ki data delete hua ki nhi thats why we use find function 
//     auto j = m.find(102);    // return address of element with key 102 if it exists, otherwise returns m.end()
//     if(j == m.end()) {
//         cout << "Element with key 102 not found." << endl; // Element not found
//     } 
//     else {
//         cout << "Element with key 102 found: " << j->first << " : " << j->second << endl;
//     }


//     cout<<"max size of map: "<<m.max_size()<<endl;            // Returns the maximum number of elements that the map can hold
//     cout<<"current size of map: "<<m.size()<<endl;            // Returns the number of elements in the map

//     return 0;
// }


//unordered map = it is used to store data in unsorted order.
// #include <iostream> 
// #include <unordered_map> // Header file for unordered_map
// using namespace std;

// int main() {
//     // Creating an unordered_map
//     unordered_map<int, string> um;

//     // Inserting elements into the unordered_map
//     um[101] = "One";
//     um.insert({102, "Two"});
//     um.insert(make_pair(103, "Three"));
//     um[104]; // by default ye null value assign karega because m[5] is not present in map or ye null value assign karega

//     for (auto p : um) {
//         cout << p.first << " : " << p.second << endl; // Output key-value pairs
//     }

//     cout << endl;

//     // Deleting an element
//     um.erase(102); // Removes the element with key 102

//     for (auto p : um) {
//         cout << p.first << " : " << p.second << endl; // Output key-value pairs
//     }

//     // Check if an element exists using find function
//     auto j = um.find(102); // return address of element with key 102 if it exists, otherwise returns um.end()
//     if (j == um.end()) {
//         cout << "Element with key 102 not found." << endl; // Element not found
//     } else {
//         cout << "Element with key 102 found: " << j->first << " : " << j->second << endl;
//     }

//     cout << "Max size of unordered_map: " << um.max_size() << endl; // Returns the maximum number of elements that the unordered_map can hold
//     cout << "Current size of unordered_map: " << um.size() << endl; // Returns the number of elements in the unordered_map

//     return 0;
// }

//pair me value store krni h jese A key me DSA and B key me java and C me DSA and D m DSA and E m Django 
#include <iostream>
#include <map> 
using namespace std;

int main() {
    
    
     int n1;
     string s;
    cout << "Enter number of courses: ";
    cin >> n1;
    map<string, int> m;

    
    for (int i = 0; i < n1; i++) {
        cout << "Enter course name: ";
        cin >> s;
        m[s]++; // Increment the count for the course
      
    }

    for (auto p : m) {
        cout << p.first << " : " << p.second << endl; 
    }

// Find the course with the maximum count
    string maxCourse;
    int Count = 0;
    for (auto p : m) {
        if (p.second > Count) {
            Count = p.second;
            maxCourse = p.first;
        }
    }

    cout << "max course " << maxCourse << " " << Count << endl;

    return 0;
}


  
