#include<iostream>
using namespace std;
int main(){
    int arr[]={0,5,0,3,42};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    
    for(i=0;i<size-i;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j==0]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}