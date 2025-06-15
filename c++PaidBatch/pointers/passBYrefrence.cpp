#include<iostream>
using namespace std;

void sum(int* a, int* b){
    int* temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 5, y = 6;
    int* p = &x;
    int* q = &y;
    sum(p,q);
    cout<<x<<" "<<y;
}