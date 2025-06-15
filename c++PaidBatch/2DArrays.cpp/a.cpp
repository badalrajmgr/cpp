#include<iostream>
using namespace std;


int factorial(int a){
    int fact = 1;
    if(a==0) return 1;
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    return fact;
}

int combination(int a,int b){
    int comb=1;
    comb=factorial(a)/(factorial(b)*factorial(a-b));
    return comb;
}
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }

}