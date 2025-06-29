 /* TEMPLATE = it is a generalized format (eg. bank receipt) of function and class that work with any data type.
 🔁 Reusability – One function/class works for all types
 -> prevent from function and operator overloading
 🔒 Type Safety – Errors caught at compile time
 📉 Less Code – No need to repeat the same logic
 🚀 Flexibility – Works with both built-in and user-defined types
 📚 Used in STL – Like vector<T>, sort(), etc.
There are two types - 
1.	Function template
2.	Class template  */

/* Example  */

#include <iostream>
using namespace std;
int max(int a , int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
double max(double a , double b){
     if(a>b){
        return a+1;
    }
    else{
        return b+1;
    }
}
int main() {
 cout<<max(4,5);
}




// exapmle  function template
#include<iostream>
using namespace std;
template<typename a,typename b>
a grt(a a1, b b1){
if(a1>b1)
return a1;
else{
    return b1;
}
}
int main() {
  cout<<grt('H','D');
}




// class template
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template<typename c1,typename c2>
class student{
    c1 age;
    c2 salary;
    public:student(c1 a, c2 s){
        age=a;
        salary=s;
    }
    void show(){
        cout<<"age = "<<age;
        cout<<"salary="<<salary;
    }
};

int main() {
student<int,float>obj(34,345.5);
obj.show();
}