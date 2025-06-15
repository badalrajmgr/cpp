#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int x = 3;
    int k = 4;


    int n = arr.size();
        int lo = 0;
        int hi = n-1;
        cout<<"1";
        vector<int> res;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(arr[mid]==x){
                while(lo>=0 && hi<=n-1 && k>0){
                    int diff1 = 0, diff2 = 0;
                    lo = mid-1; 
                    hi = mid+1;
                    diff1 = arr[mid] - arr[mid-1];
                    diff2 = arr[mid+1] - arr[mid];
                    if(diff1 > diff2) {
                        res.push_back(arr[mid+1]);
                        k--;
                    };
                    if(diff1 < diff2){
                        res.push_back(arr[mid-1]);
                        k--;
                    }
                    if(diff1 == diff2){
                        res.push_back(arr[mid-1]);
                        k--;
                        res.push_back(arr[mid+1]);
                        k--;
                    }
                    mid--;
                }
            }
            if(arr[mid]>x) hi = mid-1;
            if(arr[mid]<x) lo = mid=1;
        }
        for(int i=0;i<4;i++){
            cout<<res[i]<<" ";
        }
}
