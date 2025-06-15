#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=1;i<size;i++){
        arr[i]=arr[i-1]+arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}