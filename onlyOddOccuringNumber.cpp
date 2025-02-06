#include<iostream>
using namespace std;

int onlyOddOccuringNumber(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        res = res ^ arr[i];
    }
    return res;
}
// array should contain only one element that occurs odd number of times
int main(){
    int arr[] = {2,3,5,4,5,2,4,3,5,2,4,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = onlyOddOccuringNumber(arr,n);
    cout<<res;
    return 0;
}