#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(26,0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int index = 0;
        index = ((int)s[i])-97;
        v[index] = v[index]+1;
    }
    
    int max = 0;
    int count = 0;

    for(int i=0;i<26;i++){
        if(v[i]>max){
            max = v[i];
            count = i;
        }
    }
    cout<<((char)(97-count))<<" "<<max;

}