#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int decimal_to_binary(int n){
    string s;
    while(n!=0){
        if(n%2==0) s.push_back('0');
        else s.push_back('1');

        n = n/2;
    }
    reverse(s.begin(),s.end());
    int m = stoi(s);
    return m;
}


int main(){
    int n = 19;
    cout<<decimal_to_binary(n);

   
}