#include<iostream>
using namespace std;

int isPowerOfTwo(int n){
    int count=0;
    while(n){
        n = n & (n-1);
        count++;
    }
    if(count == 1){
        return count;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<n<<" is the power of two!";
    }
    else{
        cout<<n<<" is not the power of two!";
    }
    return 0;
}