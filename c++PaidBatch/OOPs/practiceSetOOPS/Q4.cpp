#include<iostream>
using namespace std;
int main(){
    int arr1[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int arr2[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int mul[3][3];

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            int sum = 0;
            for(int k=0;k<=2;k++){
                 sum = sum + arr1[i][k] * arr2[k][j];
            }
            mul[i][j]=sum;
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
