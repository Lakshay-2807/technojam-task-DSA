// 1. Given two numbers a and b as interval range, the task is to find the prime numbers in between this interval.

#include<iostream>
using namespace std;
bool isPrime(int num) {
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cout<<"Enter the interval range (a and b) : ";
    cin>>a>>b;
    cout<<"Prime numbers in the interval ["<<a<<", "<<b<< "] are: ";
    for(int i=a;i<=b;i++) {
        if(isPrime(i)) {
            cout<<i<<" ";
        }
    }
    return 0;
}