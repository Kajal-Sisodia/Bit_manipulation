#include<iostream>
using namespace std;

int countBit(int n){
    int count=0;
    while(n>0){
        n = n & (n-1);
        count++;
    }
    return count;
}
int flipBit(int a, int b){
    return countBit(a^b);
}

int main(){
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    int b;
    cout<<"Enter second number: ";
    cin>>b;
    flipBit(a,b);
    return 0;
}