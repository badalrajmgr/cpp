#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[7]={4,3,9,1,6,8,2};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]<arr[j]){
                arr[i]=arr[j];
                break;
            }
            else continue;
        }
    }

}