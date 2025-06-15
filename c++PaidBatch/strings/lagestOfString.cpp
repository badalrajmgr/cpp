#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        int x = stoi(temp);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}