/*
Function template:-
A function template in C++ is a blueprint for creating generic functions. It allows you to write a single function to work with different
 data types, without writing multiple overloaded functions.

->Function templates are resolved at compile-time.

-> SYNTAX:-

 template <class T>                               // or: template <typename T>
    T functionName(T arg) {
   // function logic using type T
}  */


// Example:-
#include <iostream>
using namespace std;
// template<typename a,typename b>   //you can also write typename instead of class
template <class a, class b>
a mygreater(a a1, b b1)               //return type likhna must h jo bhi returntype likhenge us format m hi answer milega , agr usme float pass kiya h to float milega like this
{
    if (a1 > b1)
        return a1;
    else
    {
        return b1;
    }
}
int main()
{
    cout << mygreater('H', 'D');
}
