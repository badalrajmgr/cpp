#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,1,0,0,1,0,1,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int j=0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            j++;
        }
    }
    cout<<"no of zeros:(j) "<<j<<endl<<"size of array: "<<size<<" "<<endl;
    
    for(int i=0;i<size;i++){
        if(i<j) arr[i]=0;
        else arr[i]=1;
        cout<<arr[i]<<" ";
    }
    return 0; 
}

/*void sortzeroandone(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]){
            v[left_ptr++]==0;
            v[right_ptr--]==1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
       
}*/