#include<iostream>
using namespace std;

int main(){
    int nums1[4] = {1,4,5,8};
    int nums2[6] = {2,3,6,7,9,10};
    int arr3[10];

    int a = 0;
    int b = 0;
    int c = 0;

    for(int i=0;i<10;i++){
        if(nums1[a]>nums2[b]){
            arr3[c] = nums2[b];
            b++;
            c++;
        } 
        else {
            arr3[c] = nums1[a];
            a++;
            c++;
        }
    }
//display
    for(int i=0;i<10;i++){
        cout<<arr3[i]<<" ";
    }
}