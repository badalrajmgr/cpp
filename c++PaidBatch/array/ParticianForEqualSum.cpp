#include<iostream>
using namespace std;
int main(){
    int arr[]={6,2,4,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum1=0,sum2=0;
    for(int i=0;i<size;i++){
        sum1+=arr[i];
        for(int j=i+1;j<size;j++){
            sum2+=arr[j];
        }
        if(sum1==sum2){
            cout<<"index no is: "<<i+1;
            break;
        }
        sum2=0;
        
    }
    cout<<endl;
    cout<<sum1<<" "<<sum2<<" ";
    
}