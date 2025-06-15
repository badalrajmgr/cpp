#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
        v[i]=v[i]*v[i];
        
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){   
            if(v[i]>v[j]){
                int temp=0;
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
        cout<<v[i]<<" ";
    }
}