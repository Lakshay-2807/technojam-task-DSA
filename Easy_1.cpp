//1.Write a program to reverse an array or string.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of Array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reversed Array : ";
    for(int j=n-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}