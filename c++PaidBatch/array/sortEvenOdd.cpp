#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &v){
int right_ptr=v.size()-1;
int left_ptr=0;

while(left_ptr<right_ptr){
    if(v[left_ptr]%2==1&& v[right_ptr]%2==0){
        swap(v[left_ptr],v[right_ptr]);
        left_ptr++; right_ptr--;
    }
    if(v[left_ptr]%2==0){
        left_ptr++;
    }
    if(v[right_ptr]%2==1){
        right_ptr--;
    }
}
    
}

vector<int> v={1,2,3,4,5};

sort(v);

    