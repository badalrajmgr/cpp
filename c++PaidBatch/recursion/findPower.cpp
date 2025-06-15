#include<iostream>
using namespace std;

int power(int a, int b){
    if(a==0) return 0;
    if(b==0) return 1;
    if(b==1) return a;
    return a*power(a,b-1);
}

int main(){
    int num;
    num = power(2,0);
    cout<<num;
}