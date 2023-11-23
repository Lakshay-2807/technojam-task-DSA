// Decimal -> binary -> Reverse -> Decimal
// THERE IS AN ISSUE IN THIS CODE 
//IT WORK FOR ONLY 4 BITs


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;
    int i=0;
    vector<int>v;
    while(n!=0){
        v.push_back(n%2);
        n=n/2;
    }
    cout<<"Reverse of its binary form : ";
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    int num=0;
    if(v[0]>0){
        num+=8;
    }
    if(v[1]>0){
        num+=4;
    }
    if(v[2]>0){
        num+=2;
    }
    if(v[3]>0){
        num+=1;
    }
    cout<<"Required Number : "<<num;
    return 0;
}
