// Ques. Reverse a string using stack
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