// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s = "cybrom";
//     for (int i = 0; i < s.size(); i++) {
//         s[i] = s.at(i) + 1;                       // Using .at() to access each character
//     }
//     cout << s;
//     return 0;
// }

// convert Cybrom into  cYBROM
//  #include <iostream>
//  using namespace std;

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     for (int i = 0; i < s.length(); i++) {
//         // If character is lowercase (a to z)
//         if (s[i] >= 'a' && s[i] <= 'z') {
//             s[i] = s[i] - ('a' - 'A');  // convert to uppercase
//         }
//         // If character is uppercase (A to Z)
//         else if (s[i] >= 'A' && s[i] <= 'Z') {
//             s[i] = s[i] + ('a' - 'A');  // convert to lowercase
//         }
//         // Other characters are left unchanged
//     }

//     cout << "Converted string: " << s << endl;

//     return 0;
// }

// Ques = largest string in a sentence
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = " What is programming? ";
    string b, str;
    cout << s << endl;

    // First word
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            b.push_back(s[i]); // Append non-space characters to b
        }
        else
        {
            break;
        }
    }

    cout << "first output: " << b << endl;

    // Find longest word
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            str.push_back(s[i]); // Build the current word
        }

        if (s[i] == ' ' || i + 1 == s.size()) // End of word or end of string
        {
            if (str.size() > b.size())
            {
                b = str;
            }
            str.clear(); // Clear for next word
        }

        cout << "final output: " << b << endl;
    }
}
