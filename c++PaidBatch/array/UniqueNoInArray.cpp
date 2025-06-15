#include<iostream>
using namespace std;

int main(){
    int arr[7]={2,3,1,3,2,4,1};
    int size=0,k=0;
    size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }   
        } 
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=-1){
            cout<<arr[i];
        }
    }
}