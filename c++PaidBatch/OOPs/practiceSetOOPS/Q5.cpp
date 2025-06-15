#include<iostream>
using namespace std;

// void swap_call_by_value(int x, int y){
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
void swap_call_by_refrence(int* a, int* b){
//     int* temp;
//     *temp = *a;
//     *a = *b;
//     *b = *temp;
//     return;
        
}

int main(){
    int num1 = 10; 
    int num2 = 20;
    // swap_call_by_value(num1, num2);
    // cout<<"by using call by value : "<<endl;
    // cout<<"num1 = "<<num1<<" , num2 = "<<num2<<endl;

    int* p = &num1;
    int* q = &num2;
    swap_call_by_refrence(p,q);
    // cout<<"by using call by refrence : "<<endl;
    // cout<<"num1 = "<<num1<<" , num2 = "<<num2<<endl;


}