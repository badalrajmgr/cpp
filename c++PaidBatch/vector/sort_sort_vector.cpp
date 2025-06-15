#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("2");
    v.push_back("21");
    v.push_back("12");
    v.push_back("1");
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
     cout<<endl;
    sort(v.begin(),v.end());
    // //sort(v.begin(),v.end());
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    

}