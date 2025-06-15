#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "a";
    int count = 0;
        
        for(int i=0;i<str.size();i++){
            if(str.size()==1) break;
            if(str[i]==str[i+1] || str[i]==str[i-1]){
                continue;
            }
            else count++;
        }
    cout<<count;
}