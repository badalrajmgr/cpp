#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4,9,6};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }

    }
    cout<<max;
}