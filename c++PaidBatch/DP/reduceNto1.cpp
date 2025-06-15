#include<iostream>
#include<limits.h>
#include<vector>
#include<algorithm>
#define inf INT_MAX 
using namespace std;
vector<int> dp(1000,-1);
int f(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    
    return 1 + min(f(n-1),min(((n%2==0)?f(n/2):inf),((n%3==0)?f(n/3):inf)));
   
}

int fbu(int n){
    dp.clear();
    dp[1]==0;
    dp[2]=dp[3]=1;

    for(int i=4;i<=n;i++){
        dp[i] = 1 + min(dp[i-1],min(((i%2==0)?dp[i/2]:INT_MAX),((i%3==0)?dp[i/3]:INT_MAX)));
    }
    return dp[n];
}

int main(){
    int n;
    cout<<"enter no : ";
    cin>>n;
    
    cout<<fbu(n);
   
    return 0;
}