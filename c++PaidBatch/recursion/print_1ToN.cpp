#include<iostream>
using namespace std;

void prnt(int n){
    if(n==0) return;  
    prnt(n-1);
    cout<<n<<endl;
}
int main(){
    prnt(10);
}