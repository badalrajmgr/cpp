#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    // vector<int> v(4);
    // vector<int> rev;
    // for(int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }
    // for(int i=v.size()-1;i>=0;i--){
    //     rev.push_back(v[i]);
    // }
    // for(int i=0;i<rev.size();i++){
    //     cout<<rev[i]<<" ";
    // }
   // reverse array without using an extra array


    // vector<int> v(5);
    // for(int i=0;i<v.size();i++){
    //     cin>>v[i];
        
    // }
          
   
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    reverse(v.begin(),v.end());
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
