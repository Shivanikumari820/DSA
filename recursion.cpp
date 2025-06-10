// #include<iostream>
// using namespace std;

//Print factorial of any number using recursion  --->>
// int fact (int a) {
//     if (a==1 || a==0){
//         return 1;                         //base case
//     }

//     int ans = a * fact(a-1);               //recursive call      
//     return ans;
// }

// int main() {
//     int a;
//     cout<<"enter no.: ";
//     cin>>a;
//     cout<<"Result: "<<fact(a);
  

//Print Table of any number using recursion  --->>
// void table(int n, int i = 1){
//     if(i>10) {
//         return ;                         //base case 
//     }

//    cout<<n<< " * " <<i<<" = " <<n*i<<endl;
//    table(n, i+1);                            //recursive call
// }

// int main () {

//     int n;
//     cout<<"enter no.";
//     cin>>n;
//     table(n);



//Print Power of any number using recursion  --->>
// double power (double base, int exponent){
//     if(exponent == 0 || base == 1) {
//         return 1;                                 //base condition
//     }

//     return base * power(base, exponent-1);         //recusrsive call
// }

// int main(){
//     double base ;
//     cout<<"enter base: ";
//     cin>>base;
//     int exponent;
//     cout<<"enter exponent: ";
//     cin>>exponent;
//     cout<< "Result: " <<power(base,exponent);
//     return 0;
// }


//  calculates the mean (average) of an integer array
// #include <iostream>
// using namespace std;
// float mean(int a[],int n ){
//     if(n==1){
//         return a[n-1];
//     }else{
//        return ((mean(a, n - 1) * (n - 1) + a[n - 1]) / n);
//     }
 
// }
// int main() {
// int a[]={2,4,6,8,10};
// int n=sizeof(a)/sizeof(a[0]);
// cout<<mean(a,n);
// }


// sum of n number 
// #include <iostream>
// using namespace std;
// int sum(int n ){
//     if(n<=1){
//         return 1;
//     }else{
//        return n+sum(n-1);
//     }

// }
// int main() {
// int n;
// cout<<"enter number ";
// cin>>n;
//  cout<<sum(n);
// }

// convert decimal to binary
// #include <iostream>
// using namespace std;
// int binary(int d ){
//     if(d==0){
//         return 0;
//     }else{
//        return d%2+10 *(binary(d/2));
// }
// }
// int main() {
// int d;
// cout<<"enter number ";
// cin>>d;
//  cout<<binary(d);
// }

// binary to decimal ==>
// (binary % 10 + 2 * binaryToDecimal(binary / 10)


// sum of array
// #include <iostream>
// using namespace std;
// int sum(int a[],int n ){
//     if(n==1){
//         return n;
//     }else{
//       return (a[n-1]+sum(a,n-1));
// }
// }
// int main() {
// int a[]={1,2,3};
// int n=sizeof(a)/sizeof(a[0]);
//  cout<<sum(a,n);
// }



#include <bits/stdc++.h>
using namespace std;

string stringReverse(string str) {
    if (str.size() == 0) {
        return "";
    } else {
        return stringReverse(str.substr(1)) + str[0];
    }
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str; 
    cout << "Reversed string: " << stringReverse(str);
    return 0;
}
