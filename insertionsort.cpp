#include<iostream>
using namespace std; 
 
int main(){

    int arr[] = {3,4,5,6,7};
    int s = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before applying insertion sort"<<"\t";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<endl;
    }
      int count = 0; 
    for(int i= 1; i<s;i++){
        int mins = i;
        while(mins>0 && arr[mins]<arr[mins-1]){
            int temp ;
            temp = arr[mins];
            arr[mins] = arr[mins-1];
            arr[mins-1]= temp;
            mins--;
            count ++;
        }
    }

     cout<<"After applying insertion sort "<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"counter Hit" <<count<<endl;
}