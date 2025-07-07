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

#include <bits/stdc++.h>
using namespace std;

bool isomorphic(string s1, string s2) {
    int n1[256] = {-1}, n2[256] = {-1};         //arrays of size 256 (for all ASCII characters).
    
    if (s1.size() != s2.size()) {
        return false; // Strings with different lengths can't be isomorphic
    }


    for (int i = 0; i < s1.size(); i++) {
        if (n1[s1[i]] != n2[s2[i]]) {
            return false;
        }

        // Update the mapping
        n1[s1[i]] = i + 1;
        n2[s2[i]] = i + 1;
    }

    return true;
}

int main() {
   string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (isomorphic(s1, s2)) {
        cout << "The strings are isomorphic." << endl;
    } else {
        cout << "The strings are not isomorphic." << endl;
    }

    return 0;
}

////// ############# Q.1 Reverse the String ###############

// #include<iostream>
// using namespace std;
// #include<string>
// #include<algorithm>

// int main(){
//   string s="Cybrom";
//   string s1;
//   for(int i=s.size()-1;i>=0;i--){
//           s1+=s[i];
//       }
//   cout<<s1;
// }

////// ############# Q.2 Anagram the String ###############

// #include<iostream>
// using namespace std;  
// #include<string>
// int main(){
//   string s1="listen";
//   string s2="silent";
//   if(s1.size()==s2.size()){
//   int a[26]={0};
//   for(int i=0;s1[i]!='\0';i++){
//       a[s1[i]-'a']++;
//   }
//   for(int i=0;s2[i]!='\0';i++){
//       a[s2[i]-'a']--;
//   }
//   bool t=true;
//   for(int i=0;i<26;i++){
//     if(a[i]!=0){
//        t=false;
//        break;
//     }
//     else{
//       t=true;
//     }
//   }
//   if(t){
//     cout<<"It is anagram";
//   }
//   else{
//     cout<<"It is not anagram";
//   }
// }
// else{
//     cout<<"It is not anagram string";
// }
// }


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
// using namespace std;
// #include<string>
// int main(){
//      string s="w3source from 2008";
//      int sum=0,a;
//      for(int i=0;s[i]!='\0';i++){
//         // cout<<s[i]<<"\t";
//       if(isdigit(s[i])){
//          a=s[i]-'0';
//         sum=sum+a;
//       }
//      }
//      cout<<"The Sum of number in String :"<<sum;
// }


//  ################ Q.7 Add Dash Between Two odd number in String ##############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//   string s="1345789";
//   string s2;
//   for(int i=0;i<s.size();i++){
//       s2+=s[i];
//      if(s[i]%2!=0 && s[i+1]%2!=0){
//         s2+='-';
//      }
//   }
//   cout<<s2;
// }

//  ################ Q.8 Toggle cash String ##############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//     string a="Python";
//     string b;
//     for(int i=0;i<a.size();i++){
//           if(a[i]<98){
//             b+=a[i]+32;
//           } 
//           else{
//             b+=a[i]-32;
//           }
//     }
//      cout<<b;
//   }


//  ##########Q.9 Convert the First letter of Each Word in String #############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){

//     string s="cpp string exercies";
//     string b;
//     for(int i=0;i<s.size();i++){
//         if(i==0){
//           b+=s[i]-32;
//         } 
//        else if(s[i] == 32 ){
//            b+=32;
//           b+=s[i+1]-32; 
//           i++;     
//        }
//        else{
//           b+=s[i];
//        }    
//     }
//     cout<<b;
// }



//  ##########Q.9 Convert the First letter of Each Word in String #############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
    
//       string s1="cpp string exercises";
//       for(int i=0;i<s1.size();i++){
//            if(i==0){
//              s1[i]=s1[i]-32;
//            }
//            else if(s1[i]==' '){
//               s1[i+1]=s1[i+1]-32;
//            }
//       }
//       cout<<s1;
// }



//  ##########Q.10 Count the word in given String #############

// #include<iostream>
// using namespace std;
// #include<string>
// int main(){
//    string s="cpp is the world Fastest programming language";
//     int c=0;
//    for(int i=0;i<s.size();i++){
//       if(s[i]==' '){
//         c+=1;
//       }
//    }
//    c+=1;
//    cout<<"NUmber of words in string :"<<c;
// }


//  #################### Missing Value Find in Vector array##########################

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//   vector<int>v={1,2,3,5,6,7};
//   int a;
   
//   for(int i=1;i<v.size();i++){
//       a=v[i]-v[i-1];
//       if(a!=1){
//         cout<<"Missing number is "<<v[i]-1<<endl;
//       }       
// }
// }