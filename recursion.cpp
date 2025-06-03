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
//         return ;                        //base case 
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