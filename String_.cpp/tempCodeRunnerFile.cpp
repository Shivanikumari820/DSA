#include<iostream>
using namespace std;
#include<string>
int main(){
   string s="cpp is the world Fastest programming language";
    int c=0;
   for(int i=0;i<s.size();i++){
      if(s[i]==' '){
        c++;
      }
   }
   c++;
   cout<<"NUmber of words in string :"<<c;
 }