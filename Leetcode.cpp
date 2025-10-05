// Q.1 Two Sum Problem in C++ ------------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> twoSum(vector<int> a, int target)
// {
//     for (int i = 0; i < a.size(); i++){
//         for (int j = i + 1; j < a.size(); j++){
//             if (a[i] + a[j] == target)
//                 return {i, j};
//         }
//     }
//     return {};
// }

// int main()
// {
//     int n, t;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++){
//         cin >> a[i];}
//     cin >> t;

//     vector<int>ans= twoSum(a, t);
//   for(auto i:ans) {
//     cout<<i<<" ";
// }


// return 0;
   
// }

//Q.2 Remove duplicates from an array using set in C++ ---------------------------------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // Number of elements

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//        cin >> arr[i]; }  

//     set<int> s;
//     for (int i = 0; i < n; i++) {
//         s.insert(arr[i]);  // Only unique elements will be kept
//     }

//     // Print unique elements
//     cout << "After removing duplicates:\n";
//     for (auto x : s) {
//         cout << x << " ";
//     }

//     return 0;
// }

// Q.3 Roman to integer conversion in C++ ---------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int romanToInt(string s) {
//     unordered_map<char, int> value = {
//         {'I', 1}, {'V', 5}, {'X', 10},
//         {'L', 50}, {'C', 100},
//         {'D', 500}, {'M', 1000}
//     };

//     int total = 0;
//     for (int i = 0; i < s.length(); i++) {
//         // If next value is larger, subtract current
//         if (i + 1 < s.length() && value[s[i]] < value[s[i + 1]]) {
//             total -= value[s[i]];
//         } else {
//             total += value[s[i]];
//         }
//     }
//     return total;
// }

// int main() {
//     string roman;
//     cout << "Enter Roman numeral: ";
//     cin >> roman;

//     int result = romanToInt(roman);
//     cout << "Integer value: " << result << endl;

//     return 0;
// }

/*

✅ Example: "XIV"
X = 10, I = 1, V = 5

First: X → next I → 10 > 1
→ total = total + 10 = 10

Then: I → next V → 1 < 5
→ total = total - 1 = 9

Then: V → no next → total = total + 5 = 14

✅ Output: 14  */

// integer to roman -------------------------------------------------------------------------------------------------------------------------------
//  #include <iostream>
//  using namespace std;

// string intToRoman(int num) {
//     int values[] =    {1000, 900, 500, 400, 100, 90,  50, 40, 10, 9,  5, 4, 1};
//     string romans[] = {"M",  "CM","D", "CD", "C","XC","L","XL","X","IX","V","IV","I"};

//     string result = "";

//     for (int i = 0; i < 13; i++) {
//         while (num >= values[i]) {
//             result += romans[i];   // Roman letter jod lo
//             num -= values[i];      // uski value minus kar do
//         }
//     }

//     return result;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Roman numeral: " << intToRoman(num) << endl;

//     return 0;
// }

//Q.4 Valid Parentheses in C++ ------------------------------------------------------------------------------------------------------------
//  #include <iostream>
//  #include <stack>
//  using namespace std;

// bool isValid( string s) {
//     stack<char> st;

//     for (char ch : s) {
//         if (ch == '(' || ch == '{' || ch == '[') {
//             st.push(ch);  // opening bracket ko stack me daal do
//         } else {
//             if (st.empty()) return false;  // koi opening bracket hai hi nahi

//             char top = st.top();
//             if ((ch == ')' && top != '(') ||
//                 (ch == '}' && top != '{') ||
//                 (ch == ']' && top != '[')) {
//                 return false;  // match nahi kiya
//             }

//             st.pop();  // match ho gaya, stack se hata do
//         }
//     }

//     return st.empty();  // agar sab match hua to stack empty hoga
// }

// int main() {
//     string input;
//     cout << "Enter bracket string: ";
//     cin >> input;

//     if (isValid(input))
//         cout << "Brackets are valid.\n";
//     else
//         cout << "Brackets are NOT valid.\n";

//     return 0;
   
// }

// Q.6  Maximum Size Subarray Sum  ----------------------------->>
// #include <iostream>
// #include <vector>
// using namespace std;

// int maxSubArray(vector<int>& nums) {
//     int sum = 0;
//     int maxSum = nums[0];

//     for (int i = 0; i < nums.size(); i++) {
//         sum += nums[i];              // Add current number to sum
//         if (sum > maxSum) {
//             maxSum = sum;                   // Update max if current sum is greater
//         }
//         if (sum < 0) sum = 0;        // If sum goes negative, reset to 0
//     }

//     return maxSum;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) cin >> nums[i];

//     int result = maxSubArray(nums);
//     cout << result;

//     return 0;
// }

//  Q.7  Split an array into two equal Sum subarrays  --------------------------->>
//  #include <iostream>
//  #include <vector>
//  using namespace std;

// bool canSplitIntoEqualSum(vector<int> arr) {
//     int total = 0;

//     // Step 1: Calculate total sum
//     for (int i = 0; i < arr.size(); i++) {
//         total = total + arr[i];
//     }

//     // If total is odd, we can't split it equally
//     if (total % 2 != 0)
//         return false;

//     int leftSum = 0;

//     // Step 2: Traverse and check if left sum ever becomes half of total
//     for (int i = 0; i < arr.size(); i++) {
//         leftSum = leftSum + arr[i];

//         if (leftSum == total / 2)
//             return true;
//     }

//     return false; // No valid split found
// }

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter " << n << " elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     if (canSplitIntoEqualSum(arr)) {
//         cout << "Yes, array can be split into two equal sum subarrays." << endl;
//     } else {
//         cout << "No, cannot split into two equal sum subarrays." << endl;
//     }

//     return 0;
// }

// Q.8 Print unique string in lexicographical order with their frequencies in C++ ------------------------------------------------------------

// #include <iostream>
// #include <map>
// #include <vector>
// using namespace std;

// void printFrequencies(vector<string> &a)
// {
//     map<string, int> freq;

//     // Step 1: Frequency count
//     for (int i = 0; i < a.size(); i++)
//     {
//         freq[a[i]]++;
//     }

//     // Step 2: Print using range-based for loop
//     int count = 0;
//     int total = freq.size();

//     for (auto element : freq)
//     {
//         cout << element.first << "=" << element.second;
//         count++;                                             // comma lgana h isliye count krre h jese hi last me pohcha count then comma nhi lagana
//         if (count < total) // Jab tak last item nahi aaya
//             cout << ",";   // Tab tak comma lagao
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cout << "Enter number of strings: ";
//     cin >> n;

//     vector<string> a(n);
//     cout << "Enter " << n << " strings:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     printFrequencies(a);

//     return 0;
// }


// Q.13  Find second largest number in an Array  --------------------------->>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int findSecondLargest(vector<int> &arr)
// {
//     sort(arr.begin(), arr.end(), greater<int>()); // descending sort

//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (arr[i] != arr[0])
//         {
//             return arr[i]; // second unique element
//         }
//     }

//     return -1; // all elements are same
// }

// int main()
// {
//     vector<int> arr = {4, 2, 7, 7, 5};

//     cout<<findSecondLargest(arr)
    // int result = findSecondLargest(arr);
    // if (result == -1)
    // {
    //     cout << "No second largest element exists.\n";
    // }
    // else
    // {
    //     cout << "Second largest number is: " << result << endl;
    // }

//     return 0;
// }


// Q.14 Isomorphic Strings in C++ ------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <string>
// using namespace std;

// bool isIsomorphic(string s, string t) {
//     int mapS[256] = {0};  // Mapping for s
//     int mapT[256] = {0};  // Mapping for t

//     for (int i = 0; i < s.length(); i++) {
//         if (mapS[s[i]] != mapT[t[i]]) {
//             return false;
//         }

//         mapS[s[i]] = i + 1;  // Store position +1
//         mapT[t[i]] = i + 1;
//     }

//     return true;
// }

// int main() {
//     string s, t;
//     cout << "Enter first string: ";
//     cin >> s;

//     cout << "Enter second string: ";
//     cin >> t;

//     if (isIsomorphic(s, t)) {
//         cout << "Yes, the strings are isomorphic." << endl;
//     } else {
//         cout << "No, the strings are not isomorphic." << endl;
//     }

//     return 0;
// }



// Q.18  Best Time to Buy and Sell Stock ------->>>
// #include <iostream>
// #include <vector>
// using namespace std;

// int maxProfit(vector<int>& prices) {
//     int minPrice = prices[0];  // pehle din ki price ko minimum maan lo
//     int maxProfit = 0;

//     for (int i = 1; i < prices.size(); i++) {
//         // agar naye din ki price chhoti hai to use min bana lo
//         if (prices[i] < minPrice) {
//             minPrice = prices[i];
//         }

//         // profit nikal ke maxProfit se compare karo
//         int profit = prices[i] - minPrice;
//         if (profit > maxProfit) {
//             maxProfit = profit;
//         }
//     }

//     return maxProfit;
// }

// int main() {
//     // int n;
//     // cout << "Enter number of days: ";
//     // cin >> n;

//     // vector<int> prices(n);
//     // cout << "Enter prices:\n";
//     // for (int i = 0; i < n; i++) {
//     //     cin >> prices[i];
//     // }

//     // int result = maxProfit(prices);
//     // cout << "Maximum Profit: " << result << endl;

//     vector<int>prices = {2,4,5,1,6};
//     cout<<maxProfit(prices);
//     return 0;
// }

//  Q.11 Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly.
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void findMinMaxSum(vector<int> a) {
//     sort(a.begin(), a.end());  // Sort the array

//     int minSum = 0, maxSum = 0;

//     // Add first 4 elements for minSum
//     for (int i = 0; i < 4; i++) {
//         minSum += a[i];
//     }

//     // Add last 4 elements for maxSum
//     for (int i = 1; i < 5; i++) {
//         maxSum += a[i];
//     }

//     cout << "Minimum sum = " << minSum << endl;
//     cout << "Maximum sum = " << maxSum << endl;
// }

// int main() {
//     vector<int> arr = {1, 3, 5, 7, 9};
//     findMinMaxSum(arr);


//     return 0;
// }


// Q.12  Find Array is Subset of Another Array  ------------------->>
// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSubset(vector<int>& A, vector<int>& B) {
//     for (int i = 0; i < B.size(); i++) {
//         bool found = false;
//         for (int j = 0; j < A.size(); j++) {
//             if (B[i] == A[j]) {
//                 found = true;
//                 break; // Element found, no need to search more
//             }
//         }
//         if (!found) {
//             return false; // If any element not found
//         }
//     }
//     return true; // All elements found
// }

// int main() {
//     // int n, m;

//     // cout << "Enter size of array A: ";
//     // cin >> n;
//     // vector<int> A(n);
//     // cout << "Enter elements of array A:\n";
//     // for (int i = 0; i < n; i++) {
//     //     cin >> A[i];
//     // }

//     // cout << "Enter size of array B: ";
//     // cin >> m;
//     // vector<int> B(m);
//     // cout << "Enter elements of array B:\n";
//     // for (int i = 0; i < m; i++) {
//     //     cin >> B[i];
//     // }

//     vector<int> A = {2,3,4,5,6};
//     vector<int> B = {2};

//     if (isSubset(A, B)) {
//         cout << "Yes, B is a subset of A" << endl;
//     } else {
//         cout << "No, B is NOT a subset of A" << endl;
//     }

//     return 0;
// }

// Q.15 Check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false
// consecutive numbers in C++ ------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool isConsecutive(vector<int> arr) {
//     sort(arr.begin(), arr.end());  // Step 1: sort the array

//     for (int i = 0; i < arr.size() - 1; i++) {
//         if (arr[i] == arr[i + 1]) {
//             return false;  // duplicate found
//         }
//         if (arr[i + 1] - arr[i] != 1) {
//             return false;  // not consecutive
//         }
//     }

//     return true;
// }

// int main() {
//     vector<int> arr;
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter numbers:\n";
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }

//     if (isConsecutive(arr)) {
//         cout << "Yes, the elements can form a consecutive sequence.\n";
//     } else {
//         cout << "No, the elements cannot form a consecutive sequence.\n";
//     }

//     return 0;
// }


//Q.19 Longest Substring Without Repeating Characters
// #include <iostream>
// using namespace std;

// int longestUniqueSubstring(string s) {
//     int maxLength = 0;

//     for (int i = 0; i < s.length(); i++) {
//         string temp = ""; // yeh string banayenge unique characters ke liye

//         for (int j = i; j < s.length(); j++) {
//             char ch = s[j];

//             // agar character temp me already hai to break karo
//             if (temp.find(ch) != -1) {
//                 break;
//             }

//             temp += ch; // unique character add karo
//         }

//         // max length update karo
//         if (temp.length() > maxLength) {
//             maxLength = temp.length();
//         }
//     }

//     return maxLength;
// }

// int main() {
//     string str;
//     cout << "Enter string: ";
//     cin >> str;

//     int result = longestUniqueSubstring(str);
//     cout << "Longest unique substring length: " << result << endl;

//     return 0;
// }


// Q.16 How to make minimum number of coins to make a Target/Amount

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int f(vector<int>& c, int t) {
//     sort(c.begin(), c.end(), greater<int>());  // Bade coin se start
//     int count = 0;

//     for (int i = 0; i < c.size(); i++) {
//         while (t >= c[i]) {
//             t -= c[i];  // coin use karo
//             count++;      // count badhao
//         }
//     }

//     if (t == 0){
//         return count;}
//     return -1;  // agar target nahi ban paya
// }

// int main() {
//     vector<int> c = {1, 5, 6, 9};  // coin values
//     int t = 11;                    // target

//     int ans = f(c, t);

//     if (ans != -1)
//         cout << "Min coins: " << ans;
//     else
//         cout << "Not possible";

//     return 0;
// }

/*Q.20 Number of 1 Bits
Write a function that takes the binary representation of a positive integer and returns the number of 
set bits
 it has (also known as the Hamming weight).   */

// #include <iostream>
// using namespace std;

// // Function to count set bits
// int countSetBits(int n) {
//     int count = 0;

//     while (n > 0) {
//         if (n % 2 == 1) {
//             count++;          // If last bit is 1, increase count
//         }
//         n = n / 2;            // Move to next bit
//     }

//     return count;
// }

// int main() {
//     int num;

//     cout << "Enter a positive number: ";
//     cin >> num;

//     int result = countSetBits(num);
//     cout << "Number of set bits (1s in binary): " << result << endl;

//     return 0;
// }


// Ques- 75 sort color  --->>
// #include <iostream>
// #include <vector>
// using namespace std;

// void sortColors(vector<int>& nums) {
//     int low = 0, mid = 0, high = nums.size() - 1;

//     while (mid <= high) {
//         if (nums[mid] == 0) {
//             swap(nums[low], nums[mid]);
//             low++;
//             mid++;
//         }
//         else if (nums[mid] == 1) {
//             mid++;
//         }
//         else { // nums[mid] == 2
//             swap(nums[mid], nums[high]);
//             high--;
//         }
//     }
// }

// int main() {
//     vector<int> nums = {2, 0, 2, 1, 1, 0};

//     sortColors(nums);

//     for (int num : nums) {
//         cout << num << " ";
//     }

//     return 0;
// }
 

//  Ques no. 258 ------>>>

// #include <iostream>
// using namespace std;

// int addDigits(int num) {
//     while (num >= 10) {
//         int sum = 0;
//         while (num > 0) {
//             sum += num % 10;
//             num /= 10;
//         }
//         num = sum;
//     }
//     return num;
// }

// int main() {
//     int num;
//     cin >> num;
//     cout << addDigits(num);
//     return 0;
// }

   
// //Ques- 441 
// class Solution {
// public:
//     int arrangeCoins(int n) {
//         long coins = n; // Store n in 'coins' as long to prevent overflow when n is very large
//         int rows = 0;  
        
//         // Keep forming rows while we have enough coins for the next row
//         while (coins >= rows + 1) {
//             rows++;          // Build the next row (row number increases by 1)
//             coins -= rows;   // Subtract the coins used for this row from total coins
//         }  
         
//         return rows; 
          
//     } 
// };
         
//Question - 283 --> Move zeros to end of array
// #include <bits/stdc++.h>
// using namespace std;

// void moveZeroes(vector<int>& nums) {
//     int pos = 0; // अगला non-zero कहाँ रखना है

//     // Step 1: सारे non-zero आगे ले आओ
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] != 0) {
//             nums[pos] = nums[i];
//             pos++;
//         }
//     }

//     // Step 2: बाकी जगह पर 0 डाल दो
//     while (pos < nums.size()) {
//         nums[pos] = 0;
//         pos++;
//     }
// }

// int main() {
//     vector<int> nums = {0, 1, 0, 3, 12};

//     moveZeroes(nums);

//     // Output print
//     for (int x : nums) {
//         cout << x << " ";
//     }
//     return 0;
// }
        
                     