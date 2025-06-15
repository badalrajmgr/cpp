#include<iostream>
using namespace std;

int main(){

    int arr[]={3,4,6,7,1};
    int sum=0,n=5,targetsum=5,k=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==targetsum) k++;
        }
    }
    cout<<k++;
}