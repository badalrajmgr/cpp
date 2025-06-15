//27 --> 20 --> 18 --> 9 --> 0
#include<iostream>
#include<vector>
using namespace std;
vector<int> dp(1000,-1);
int f(int n){
    if(n%10==n) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1 + ((n%10==0)?f(n-(n/10)):f(n-(n%10)));
}

int main(){
    int n;
    cout<<"enter no : ";
    cin>>n;
    cout<<f(n);
    return 0;
}