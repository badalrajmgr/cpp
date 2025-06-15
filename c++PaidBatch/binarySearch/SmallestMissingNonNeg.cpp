#include<iostream>
using namespace std;
int main(){
    int arr[8] = {0,1,2,4,5,8,9,12};
    int count = 0;
    for(int i=0;i<8;i++){
        if(arr[i]==i){
            count++;
        }
        else break;
    }
    cout<<count;
}