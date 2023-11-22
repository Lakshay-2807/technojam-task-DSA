// 3. Find the factorial of a large number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    unsigned long long fac=1;
    while(n!=0){
        fac*=n;
        n--;
    }
    cout<<"factorial : "<<fac;
    return 0;
}