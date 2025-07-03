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



//convert Cybrom into  cYBROM
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        // If character is lowercase (a to z)
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A');  // convert to uppercase
        }
        // If character is uppercase (A to Z)
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');  // convert to lowercase
        }
        // Other characters are left unchanged
    }

    cout << "Converted string: " << s << endl;

    return 0;
}

