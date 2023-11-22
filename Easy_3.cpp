// 3.Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Range of array till : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n-1);
    for(int j=0;j<n-1;j++){
        if(arr[j]+1!=arr[j+1]){
            cout<<"Missing Number : "<<arr[j]+1<<endl;
            break;
        }
   }
   return 0;
}