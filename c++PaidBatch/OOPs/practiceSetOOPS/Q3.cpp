//Write a C++ program to find sum of first 100 natural numbers by using
//           (a) for loop (b) while loop (c) do-while loop.


#include<iostream>
using namespace std;

void sum1(int x){
    int sum=0;
    for(int i=1;i<=x;i++){
        sum+=i;
    }
    cout<<"sum of the digits are : "<<sum<<" by using 'for loop'"<<endl;
}
void sum2(int x){
    int sum=0, i=1;
    while(i<=x){
        sum+=i;
        i++;
    }
    cout<<"sum of the digits are : "<<sum<<" by using 'while loop'"<<endl;
}
void sum3(int x){
    int sum=0, i=1;
    do{
        sum+=i;
        i++;
    }
    while(i<=x);
    cout<<"sum of the digits are : "<<sum<<" by using 'do while loop'"<<endl;
}
int main(){  
    sum1(100);
    sum2(100);
    sum3(100);
    return 0;
}