#include<iostream> 
using namespace std;
void prnt(int n){
    if(n==0) return; //base case
    cout<<n<<endl;
    prnt(n-1);
    
}

int main(){

    prnt(6);
    
}