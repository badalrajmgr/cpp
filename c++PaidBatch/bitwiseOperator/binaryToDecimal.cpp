#include<iostream>
#include<string>
using namespace std;

int binary_to_decimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char zz = binary[i];
        int num = zz - '0';
        result = result + num * (1<<(n-i-1));
    }
    return result;
}

int main(){
    string binary = "1000";
    
    cout<<binary_to_decimal(binary);;
    return 0;
}