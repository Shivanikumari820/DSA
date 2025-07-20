// Two Sum Problem in C++ ------------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> twoSum(vector<int> a, int target)
// {
//     for (int i = 0; i < a.size(); i++)
//         for (int j = i + 1; j < a.size(); j++)
//             if (a[i] + a[j] == target)
//                 return {i, j};
//     return {};
// }

// int main()
// {
//     int n, t;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     cin >> t;

//     vector<int> ans = twoSum(a, t);
//     if (ans.size() > 0)
//     {
//         cout << ans[0] << " " << ans[1];
//     }
//     else
//     {
//         cout << "No match";
//     }
// }

// Remove duplicates from an array using set in C++ ---------------------------------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // Number of elements

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) cin >> arr[i];  // Input values

//     set<int> s;
//     for (int i = 0; i < n; i++) {
//         s.insert(arr[i]);  // Only unique elements will be kept
//     }

//     // Print unique elements
//     cout << "After removing duplicates:\n";
//     for (int x : s) {
//         cout << x << " ";
//     }

//     return 0;
// }

// Roman to integer conversion in C++ ---------------------------------------------------------------------------------------------------------
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

// Valid Parentheses in C++ ------------------------------------------------------------------------------------------------------------
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

// maximum subarray sum in C++ ------------------------------------------------------------------------------------------------------------
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

// Minimum Size Subarray Sum in C++ ------------------------------------------------------------------------------------------------------------
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


// Print second largest element in an array in C++ ------------------------------------------------------------------------------------------------------------
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

//     int result = findSecondLargest(arr);
//     if (result == -1)
//     {
//         cout << "No second largest element exists.\n";
//     }
//     else
//     {
//         cout << "Second largest number is: " << result << endl;
//     }

//     return 0;
// }


// Isomorphic Strings in C++ ------------------------------------------------------------------------------------------------------------
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



// Best Time to Buy and Sell Stock in C++ ------------------------------------------------------------------------------------------------------------
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
//     int n;
//     cout << "Enter number of days: ";
//     cin >> n;

//     vector<int> prices(n);
//     cout << "Enter prices:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> prices[i];
//     }

//     int result = maxProfit(prices);
//     cout << "Maximum Profit: " << result << endl;

//     return 0;
// }


// Find array is the subset of another array in C++ ------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSubset(vector<int>& A, vector<int>& B) {
//     for (int i = 0; i < A.size(); i++) {
//         bool found = false;
//         for (int j = 0; j < B.size(); j++) {
//             if (A[i] == B[j]) {
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
//     int n, m;

//     cout << "Enter size of array A: ";
//     cin >> n;
//     vector<int> A(n);
//     cout << "Enter elements of array A:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> A[i];
//     }

//     cout << "Enter size of array B: ";
//     cin >> m;
//     vector<int> B(m);
//     cout << "Enter elements of array B:\n";
//     for (int i = 0; i < m; i++) {
//         cin >> B[i];
//     }

//     if (isSubset(A, B)) {
//         cout << "Yes, B is a subset of A" << endl;
//     } else {
//         cout << "No, B is NOT a subset of A" << endl;
//     }

//     return 0;
// }


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


