#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
     cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    //for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
}