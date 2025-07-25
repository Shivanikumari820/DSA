
// Ques = largest string in a sentence
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = " What is programming? ";
//     string b, str;
//     cout << s << endl;

//     // First word
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] != ' ')
//         {
//             b.push_back(s[i]); // Append non-space characters to b
//         }
//         else
//         {
//             break;
//         }
//     }

//     cout << "first output: " << b << endl; 

//     // Find longest word
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] != ' ')
//         {
//             str.push_back(s[i]); // Build the current word
//         }

//         if (s[i] == ' ' || i + 1 == s.size()) // End of word or end of string
//         {
//             if (str.size() > b.size())
//             {
//                 b = str;
//             }
//             str.clear(); // Clear for next word
//         }

//         cout << "final output: " << b << endl;
//     }
// }

//  ############## Ques- Find the string is isomorphic or not  ###############

// #include <bits/stdc++.h>
// using namespace std;

// bool isomorphic(string s1, string s2) {
//     int n1[256] = {-1}, n2[256] = {-1};         //arrays of size 256 (for all ASCII characters).
    
//     if (s1.size() != s2.size()) {
//         return false; // Strings with different lengths can't be isomorphic
//     }


//     for (int i = 0; i < s1.size(); i++) {
//         if (n1[s1[i]] != n2[s2[i]]) {
//             return false;
//         }

//         // Update the mapping
//         n1[s1[i]] = i + 1;
//         n2[s2[i]] = i + 1;
//     }

//     return true;
// }

// int main() {
//    string s1, s2;

//     cout << "Enter first string: ";
//     cin >> s1;

//     cout << "Enter second string: ";
//     cin >> s2;

//     if (isomorphic(s1, s2)) {
//         cout << "The strings are isomorphic." << endl;
//     } else {
//         cout << "The strings are not isomorphic." << endl;
//     }

//     return 0;
// }

////// ############# Q.1 Reverse the String ###############

// #include<iostream>
// using namespace std;
// #include<string>
// #include<algorithm>  // although not used here, useful for std::reverse
// int main() {
//     string s = "Cybrom";  // Original string
//     string s1;            // Reversed string store karne ke liye
//     for (int i = s.size() - 1; i >= 0; i--) {
//         s1 += s[i];  // har character ko ulta s1 me daal rahe ho
//     }
//     cout << s1;  // Output: morb y C
// }


////// ############# Q.2 Anagram the String ###############

// #include<iostream>
// using namespace std;
// #include<string>

// int main() {
//     // Define two strings to compare
//     string s1 = "listen";
//     string s2 = "silent";

//     // Step 1: Check if lengths are equal
//     if (s1.size() == s2.size()) {
        
//         // Step 2: Create an array to count characters (for 26 lowercase letters)
//         int a[26] = {0};

//         // Step 3: Count frequency of characters in s1
//         for (int i = 0; s1[i] != '\0'; i++) {
//             a[s1[i] - 'a']++; // Increase count of that character
//         }

//         // Step 4: Subtract frequency using characters in s2
//         for (int i = 0; s2[i] != '\0'; i++) {
//             a[s2[i] - 'a']--; // Decrease count of that character
//         }

//         // Step 5: Check if all counts are 0
//         bool t = true; // Assume it is an anagram
//         for (int i = 0; i < 26; i++) {
//             if (a[i] != 0) {  // If any count is not zero
//                 t = false;    // Not an anagram
//                 break;
//             }
//         }

//         // Step 6: Final result
//         if (t) {
//             cout << "It is anagram";
//         } else {
//             cout << "It is not anagram";
//         }

//     } else {
//         // If lengths are different, definitely not an anagram
//         cout << "It is not anagram string";
//     }

//     return 0;
// }



////// ############# Q.3 Replace each letter with next lette in String ###############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//      string s="cybrom";
//      cout<<"Before Replace :"<<s;
//      for(int i=0;i<s.size();i++){
//         s[i]=s[i]+1;
//      }
//      cout<<"\nAfter Replace :"<<s;
// }



////// ############ Q.4 Count the Vowel in String #########

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//    string s="smile";
//     int c=0;
//    for(int i=0;i<s.size();i++){
//       if(s[i]=='a'||s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
//           c++;
//       }
//    }

//    cout<<"Vowels :"<<c;
// }


////  ############ Q.5 Count the Number in String ################### 

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "w3source from 2008";  // Mixed string
//     int sum = 0, a;
//     for (int i = 0; s[i] != '\0'; i++) {
//         // Check if character is a digit
//         if (isdigit(s[i])) {
//             a = s[i] - '0';  // Convert char digit to int (e.g., '3' → 3)
//             sum += a;
//         }
//     }
//     cout << "The Sum of numbers in String : " << sum;
// }



//  ################ Q.7 Add Dash Between Two odd number in String ##############

// #include<iostream>
// using namespace std;
// #include<string>
// int main() {
//     string s = "1345789";                           // input string of digits
//     string s2;                                          // output string jisme hum dash insert karenge
//     for (int i = 0; i < s.size(); i++) {
//         s2 += s[i];                                      // har character ko s2 me add kar rahe hain
//         if (s[i] % 2 != 0 && s[i + 1] % 2 != 0) {
//             s2 += '-';      // dash insert kar diya
//         }
//     }
//     cout << s2;
// }


//  ################ Q.8 Toggle cash String ##############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//     string a="Python";
//     string b;
//     for(int i=0;i<a.size();i++){
//           if(a[i]<98){
//             b=a[i]+32;
//           } 
//           else{
//             b=a[i]-32;
//           }
//     }
//     cout<<b;
//     return 0;
//  }


//  ##########Q.9 Convert the First letter of Each Word in String #############

// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string s = "cpp string exercies";
//     string b;
//     for (int i = 0; i < s.size(); i++) {
//         if (i == 0 || s[i-1] == ' ') {           // // First character or character after space
//             if (s[i] >= 'a' && s[i] <= 'z') {
//                 b += s[i] - 32;                     // lowercase → uppercase
//             } else {
//                 b += s[i];                         // already uppercase or non-letter
//             }
//         } else {
//             b += s[i];                                  // normal character
//         }
//     }

//     cout << b;
//     return 0;
// }

//  ##########Q.10 Count the word in given String #############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//    string s="cpp is the world Fastest programming language";
//     int c=0;
//    for(int i=0;i<s.size();i++){
//       if(s[i]==' '){
//         c++;
//       }
//    }
//    c++;
//    cout<<"NUmber of words in string :"<<c;
// }


//  #################### Missing Value Find in Vector array##########################

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//   vector<int>v={1,2,3,5,6,7};
   
//   for(int i=1;i<v.size();i++){
//      if(v[i]-v[i-1]!=1){
//         cout<<"Missing number is "<<v[i]-1<<endl;
//       }
//     }
// }