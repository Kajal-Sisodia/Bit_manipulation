#include<iostream>
using namespace std;
//Brain Karnigum algo

unsigned int countSetBit(int n){
    int count=0;
    while(n>0){
        n = n&(n-1);
        count++;
    }
    return count;
}int main(){
    int n;
    cout<<"Enter the  number: ";
    cin>>n;
    int res = countSetBit(n);
    cout<<res;
    return 0;
}