// #include<iostream>
// using namespace std;
// template <class obj>
// class job
// {
//     public: obj v;
//     job(obj val)
//     {
//         v= val;
//         cout<<"value = " <<v;
//     }
// };

// int main(){
//     job<int> j(18);                   //<> iske and ham data type declare krte h runtime pr 
    

// }


//2nd example in class template => add two number 
#include<iostream>
using namespace std;

template <class obj1, class obj2>
class job {
public:
    obj1 v1;
    obj2 v2;

    job(obj1 val1, obj2 val2) {
        v1 = val1;
        v2 = val2;
        cout << "Sum of values = " << v1 + v2 << endl;
    }

    void show() {
        cout << "Value of v1 = " << v1 << endl;
        cout << "Value of v2 = " << v2 << endl;
    }
};

int main() {
    job<int, float> j(18, 2.3);    //<> iske and ham data type declare krte h runtime pr 
    j.show();                      //object ko call kiya h 

    return 0;
}
