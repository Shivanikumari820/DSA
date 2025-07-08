// #include<bits/stdc++.h>
// using namespace std;

// class cybrom 
// {
//     public:int *arr;
//     int n, top;
//     cybrom (int a){
//         n = a;
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int v){
//         if(top == n-1){
//             cout<<"\n Overflow \n";
//             return ;
//         }
//         top ++;
//         arr[top] = v;
//     }
//     int tops(){
//         if(top == -1){
//             cout<< "\n Underflow \n";
//             return -1;
//         }
//         return arr[top];
//     }
//     void pop(){
//         if(top == -1){
//             cout<<"\n There is no data \n";
//             return ;
//         }
//         top --;
//     }
// };

// int main() {
//     int s ; 
//     cout<<"Enter size of array \n";
//     cin>>s;
//     cybrom c(s);
//     c.push(12);
//     c.push(22);
//     c.push(32);
//     c.push(42);

//     while(c.top != -1){
//         cout<<"\n The data in stack is \n";
//         cout<<c.tops()<<"\n";
//         c.pop();
//     }
//     // cout<<c.tops();
//     // c.pop();
//     // c.pop();
//     // c.pop();
//     // cout<<"\n top = "<<c.tops();

// }



#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(2);
    st.push(22);
    st.push(25);
    st.push(28);
    cout<<st.top();
    cout<<" size of stack \n" <<st.size() <<"\n";
    while(!st.empty()){
        cout<<st.top()<<"\n";
        st.pop();
    }
}