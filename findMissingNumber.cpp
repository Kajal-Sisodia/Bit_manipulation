#include<iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    int xor1=0, xor2=0;
    for(int i=0; i<n-1; i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1^n;
    int res = xor1^xor2;
    return res;
}

int main(){
    int arr[]={1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = findMissingNumber(arr, n);
    cout<<res;
    return 0;
}