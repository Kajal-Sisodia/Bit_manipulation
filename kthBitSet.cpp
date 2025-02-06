#include<iostream>

using namespace std;

void isKthBith(int n, int k){
    if(n&(1<<(k-1)))
        cout<<"SET";
    else{
        cout<<"CLEAR";
    }
}
int main(){
    int n,k;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter the placevalue: ";
    cin>>k;
    isKthBith(n,k);
    return 0;
}