//Write a C++ program to find the largest value from the given 
//(a) Two numbers, (b) Three numbers, (c) Four numbers.


#include<iostream>
using namespace std;

void twoNum(int x, int y){
    if(x > y) cout<<x<<" is largest "<<endl;
    else cout<<y<<" is largest"<<endl;
}
void threeNum(int x, int y, int z){
    if(x>y && x>z){
        cout<<x<<" is largest"<<endl;
    }
    if(y>x && y>z){
        cout<<y<<" is largest"<<endl;
    }
    if(z>x and y<z){
        cout<<z<<" is largest"<<endl;
    }
}
void fourNum(int x, int y, int z, int t){
    if(x>y && x>z && x>t){
        cout<<x<<" is largest"<<endl;
    }
    if(y>x && y>z && y>t){
        cout<<y<<" is largest"<<endl;
    }
    if(z>x && y<z && z>t){
        cout<<z<<" is largest"<<endl;
    }
    if(t>x && y<t && t>z){
        cout<<t<<" is largest"<<endl;
    }
}
int main(){
   twoNum(5,6);
   threeNum(4,5,6);
   fourNum(8,2,6,7);
}