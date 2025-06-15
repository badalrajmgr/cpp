#include<iostream> 
using namespace std;
int prnt(int n){
    if(n==1) return 1; //base case
    return n+prnt(n-1);
    
}

int main(){
    int sum = 0;
    sum = prnt(10);
    cout<<sum;
    
}