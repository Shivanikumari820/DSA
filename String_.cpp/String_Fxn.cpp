#include <iostream>
#include <string>
#include <algorithm>  // for transform
using namespace std;

int main() {
    string s = "Hello123";

    cout << "1. Length: " << s.length() << endl;            // 8
    cout << "2. Empty?: " << s.empty() << endl;             // 0 (false)
    cout << "3. Char at index 1: " << s.at(1) << endl;      // e
    cout << "4. First char: " << s.front() << endl;         // H
    cout << "5. Last char: " << s.back() << endl;           // 3


    s.append("456");
    cout << "6. After append: " << s << endl;               // Hello123456

    string s2 = " World";
    cout << "7. After + : " << s + s2 << endl;              // Hello123456 World

    cout << "8. Find '123': " << s.find("123") << endl;     // 5

    s.replace(5, 3, "ABC");
    cout << "9. After replace: " << s << endl;              // HelloABC456

    s.erase(5, 3);
    cout << "10. After erase: " << s << endl;               // Hello456

    s.insert(5, "---");
    cout << "11. After insert: " << s << endl;              // Hello---456

    cout << "12. Substring (0,5): " << s.substr(0,5) << endl; // Hello

    string lower = s;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    cout << "13. Lowercase: " << lower << endl;             // hello---456

    string upper = s;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "14. Uppercase: " << upper << endl;             // HELLO---456

    cout << "15. Using loop: ";
    for(char c : s) cout << c;
    cout << endl;                                           // Hello---456

    s.clear();
    cout << "16. After clear, is empty: " << s.empty() << endl; // 1 (true)

    return 0;
}
