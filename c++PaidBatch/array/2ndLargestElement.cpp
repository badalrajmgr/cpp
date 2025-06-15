#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,7,6,1,7,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=-1,max2=-1,a=0;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i]; 
        } 
    }
    for(int i=0;i<size;i++){
        if(arr[i]==max){
            arr[i]=0;       
        }
    }

    for(int i=0;i<size;i++){
        if(max2<arr[i]){
            max2=arr[i];
        }
    }
    cout<<max2;

}