#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the range : ";
    cin>>n1>>n2;
    cout<<"Prime Numbers : ";
    for(int i=n1;i<=n2;i++){
        bool isPrime=true;
        for(int j=2;j*j<=i;j++) {
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime&&i>1){
            cout<<i<<" ";
        }
    }
    return 0;
}
