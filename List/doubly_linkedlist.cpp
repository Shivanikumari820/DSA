// #include<iostream>
// using namespace std;
// #include<list>
// int main() {
//     list<int> myList = {10, 20, 30, 40, 50};

//     // Displaying the elements of the list
//     cout << "Elements in the list: ";
//     for (int num : myList) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Adding an element to the front
//     myList.push_front(5);
//     cout << "After adding 5 to the front: ";
//     for (int num : myList) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Adding an element to the back
//     myList.push_back(60);
//     cout << "After adding 60 to the back: ";
//     for (int num : myList) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Removing an element from the front
//     myList.pop_front();
//     cout << "After removing the front element: ";
//     for (int num : myList) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Removing an element from the back
//     myList.pop_back();
//     cout << "After removing the back element: ";
//     for (int num : myList) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }





//why use remove_if in list  =The remove_if function is used to remove elements from a list based on a condition.  remove_if function ko as a parameter ke roop mein ek condition deta hai, jo list ke elements par apply hoti hai. Agar condition true hoti hai, toh element ko list se remove kar diya jata hai. Ye function efficient hai kyunki ye sirf un elements ko remove karta hai jo condition ko satisfy karte hain, bina kisi loop ke.

#include <iostream>
#include <list> 
#include <algorithm>        // For std::remove_if
using namespace std;

int main() {
    list<int> myList = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    cout << "Original list: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    remove_if(myList.begin(), myList.end(), [](int num) {
        return num % 2 == 0;  // Remove even numbers
    });

            cout << "After removing even numbers: ";
            for (int num : myList) {
                cout << num << " ";
            }
            cout << endl;
        }


// Lambda function in list = A lambda function is an anonymous function that can be defined in place, allowing for concise and flexible code. In the context of lists, it can be used to specify conditions for operations like filtering or transforming elements.
//  give example of lambda function in list
