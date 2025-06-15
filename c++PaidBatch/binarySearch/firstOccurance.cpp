#include<iostream>
using namespace std;
int main(){
    int arr[12] = {4,4,4,5,5,5,5,6,6,6,7,8};
    int x = 5;

    int lo = 0;
    int hi = 12;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
        else{
            hi = mid-1;
        }

        }
        if(arr[mid]>x) hi = mid-1; 
        if(arr[mid]<x) lo = mid+1;
    }
    
   
    return 0;
}