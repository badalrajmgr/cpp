#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int* temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    cout<<"enter the size of array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter zeroes and ones : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //    for(int j=i+1;j<n;j++){
    //         if(arr[i]==1){
    //             if(arr[j]==0) swap(arr[i],arr[j]);
    //         }
    //    }
    // }


// two pointers method, we can travers only one time in array
    int i = 0;
    int j= n-1;
    while(i<j){
       if(arr[i]==0) i++;
       if(arr[j]==1) j--;
       if(arr[i]==1 && arr[j]==0) swap(arr[i],arr[j]);
    //    i++;
    //    j--;

    }
    // display
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}