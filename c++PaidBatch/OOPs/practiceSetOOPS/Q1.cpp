//1.	Write a C++ program to check whether a given number is prime or not ?
#include<iostream>
using namespace std;
int main(){
    int num;
    int flag = 0;
    cout<<"enter number : ";
    cin>>num;
    for(int i=2;i<num;i++){
        if(num==2) cout<<"prime no.";
        if(num==1) cout<<"not a prime no.";
        if(num % i == 0){
            flag = 1;
            break;
        }   
    }
    if(flag == 1) cout<<"not a prime no.";
    if(flag == 0) cout<<"prime no.";
    return 0;  
}