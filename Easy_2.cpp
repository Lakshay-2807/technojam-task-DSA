//2. Given an array of N integers, and an integer K, the task is to find the number of pairs of integers in the array whose sum is equal to K.

#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter length of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum to be checked : ";
    cin>>k;
    int pair=0;
    for(int j=0;j<n;j++){
        for(int m=j+1;m<n;m++){
            if(arr[j]+arr[m]==k){
                pair++;
            }
        }
    }
    cout<<"Number of pairs = "<<pair<<endl;
    return 0;
}