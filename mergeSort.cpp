#include<iostream>
using namespace std;


void merges(int arr[], int low, int mid, int high) {
    int b [high+1];
    int i = low;
    int j = mid+1;
    int k = low;

    while(i<=mid && j<=high) {
        if(arr[i] <arr[j]){
            b[k] = arr[i];
            i++;
        }
         else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k] = arr[i];
        i++;
        j++;
    }
       while(j<=high){
        b[k] = arr[j];
        j++;
        k++;
    }

    for(int i = low; i<= high; i++){
        arr[i] = b[i];
    }
}
void msort (int arr[] , int low, int high){
    int mid;
    if(low<high){
        mid = (low+high)/2;
        msort(arr,low,mid);
        msort(arr, mid+1, high);
        merges(arr,low,mid, high);
    }
}
int main() {

    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n];
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i= 0; i<s; i++){
        cout<<arr[i];
    }

    msort(arr, 0, s-1);

     for(int i= 0; i<s; i++){
        cout<<arr[i];
    }
    return 0;
}