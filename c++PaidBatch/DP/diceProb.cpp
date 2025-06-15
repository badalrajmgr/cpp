#include<iostream>
#include<vector>

using namespace std;
vector<int> dp(100000, -1);
int f(int n){
    if(n==0) return 1;
    int sum = 0;
    if(dp[n] != -1) return dp[n];
    for(int i=1;i<=6;i++){
        if(n-i < 0) break;
       sum += f(n-i);
    } 
    return dp[n]=sum;
}
 
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<f(n);
    return 0;
}