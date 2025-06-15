#include<iostream>
using namespace std;
class complex{
    friend class calculator;
    int real;
    int img;
    public:
    complex(int a, int b){
        real = a;
        img = b;
    }
};
class calculator{
    int sumComp;
    public:
    void sum(complex c1, complex c2){
        int sumReal = c1.real + c2.real ;
        int sumImg = c1.img + c2.img;
        cout<<sumReal<<" + i"<<sumImg<<endl;
    }

};
int main(){
    complex o1(4,5), o2(6,7);
    calculator cal;
    cal.sum(o1,o2);
    return 0;
}