#include<iostream>
using namespace std;
int main(){
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=6;j++){
    //         if(i%2==1){
    //             if(j%2==0) cout<<"2";
    //             else cout<<"1";
    //         }
    //         if(i%2!=1){
    //             if(j%2==1) cout<<"2";
    //             else cout<<"1"; 
    //         }
    //     }
    //     cout<<endl;
    // }
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i+j)%2==0) cout<<"1";
            else cout<<"2";
        }
        cout<<endl;
    }
}