// // Ques. Reverse a string using stack
// #include <bits/stdc++.h>
// using namespace std;

// string reverseString(string str)
// {
//     stack<char> s;

//     for (int i = 0; i < str.length(); i++)
//     {
//         s.push(str[i]);
//     }

//     string rev = "";
//     while (!s.empty())
//     {
//         rev += s.top(); // Top element ko reversed string me add karo
//         s.pop();        // Aur stack se hata do
//     }

//     return rev;
// }

// int main()
// {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s); // Yeh user se pura line input lega (space ke sath bhi)
//     cout << "Reversed string: " << reverseString(s) << endl;

//     return 0;
// }

// // Ques. Check for balanced parentheses using stack

// #include <bits/stdc++.h>
// using namespace std;

// bool isValid(string expr) {
//     stack<char> s;  // Stack to store opening brackets

//     for (int i = 0; i < expr.length(); i++) {
//         char c = expr[i];                                   // Current character

//         if (c == '(' || c == '{' || c == '[') {               // // If it's an opening bracket, push it into the stack
//             s.push(c);
//         }

//         else if (c == ')' || c == '}' || c == ']') {               // If it's a closing bracket

//             if (s.empty())                             // If stack is empty, it means there's no matching opening bracket  ,So, the expression is invalid
//                 return false;

//             char top = s.top();                       // Get the last opening bracket
//             s.pop();                                   // Remove it from stack

//             // Check if it matches with the closing bracket
//             if ((c == ')' && top != '(') || (c == '}' && top != '{') ||  (c == ']' && top != '[')) {
//                 return false;                                  // Mismatch → invalid
//             }
//         }
//     }

//     return s.empty();               //    // If stack is empty at the end → all brackets matched
// }

// // Main function to test some expressions
// int main() {
//    string input;

//     cout << "Enter an expression with brackets: ";
//     getline(cin, input);                                 // Taking full line input (spaces allowed)

//     if (isValid(input)) {
//         cout << "The expression is Balanced " << endl;
//     } else {
//         cout << "The expression is Not Balanced" << endl;
//     }

//     return 0;
// }

//  Ques. Write a program to find a minimum value in stack

#include <bits/stdc++.h>
using namespace std;

int findMin(stack<int> s) {

    if (s.empty()) {
        cout << "Stack is empty" << endl;
        return -1;                           // Stack khali hai, toh minimum value nahi hai
    }
    else if (s.size() == 1) {
        return s.top();                      //age sirf ek hi element hai, toh wahi minimum hai
    }

    int min = s.top();
    
    while (!s.empty()) {
        if (s.top() < min) {
            min = s.top();
        }
        s.pop();
    }

    return min;
}

int main(){

    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(8);
    s.push(1);

 cout << "Minimum value in stack: " << findMin(s) << endl;

    return 0;
}

// Ques :- Write a program to print sky is blue = blue is sky by using stack or any other sentence to reverse them

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     string str;



//     cout << "Enter a sentence: ";
//     getline(cin, str);

//     stack<string> st;

//     string word = "";
//     for (int i = 0; i <= str.length(); i++)
//     {

//         if (i < str.length() && str[i] != ' ')
//         {
//             word += str[i];                    // word banate raho 
//         }
//         else
//         {
//             if (word != "")                
//             {
//                 st.push(word); // space ya end pe push karo
//                 word = "";     // firse empty karo next word ke liye
//             }
//         }
//     }

//     cout << "Reversed sentence: ";
//     while (!st.empty())
//     {
//         cout << st.top();
//         st.pop();
//         cout << " ";
//     }

//     return 0;
// }



//find second largest number
#include <iostream>
#include <stack>        
using namespace std;
int findSecondLargest(stack<int> s) {
    if (s.size() < 2) {
        cout << "Not enough elements in the stack." << endl;
        return -1; // Not enough elements to find second largest
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (current > largest) {
            secondLargest = largest; // Update second largest
            largest = current;        // Update largest
        } else if (current > secondLargest && current < largest) {
            secondLargest = current;  // Update second largest if current is between
        }
    }

    return secondLargest;
}
int main() {
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(8);
    s.push(1);
    s.push(3);

    int secondLargest = findSecondLargest(s);
    if (secondLargest != -1) {
        cout << "Second largest number in the stack: " << secondLargest << endl;
    }

    return 0;
}

