// given an integer n, find the maximum power of two that is smaller than n

#include<iostream>
using namespace std;

int maxPow(int n){
    int temp;
    while(n>0){
        temp = n;
        n = (n & (n-1));
    }
    return temp;
}

int main(){
    int x = 257;
    cout<<maxPow(x);
}