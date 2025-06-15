#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[]={-10,4,5,-3,6,1,-2};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=0;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}