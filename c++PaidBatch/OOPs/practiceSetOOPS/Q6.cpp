#include<iostream>
using namespace std;

class complex{
    friend class calculator;
    int real;
    int img;
    public:
        void setNum(int a, int b){
            real = a;
            img = b;
        }
        void getNum(){
            cout<<real<<" + "<<"i"<<img;
        }
};

class calculator{
    float res1;
    float res2;
    public:
        
        void sumComplex(complex , complex);
        void subComplex(complex , complex);
        void multiComplex(complex , complex);
        void divComplex(complex , complex);

};

void calculator :: sumComplex(complex c1, complex c2){
    res1 = c1.real + c2.real;
    res2 = c1.img + c2.img;
    cout<<"the sum is : "<<res1<<" + "<<res2<<"i"<<endl;
}
void calculator :: subComplex(complex c1, complex c2){
    res1 = c1.real - c2.real;
    res2 = c1.img - c2.img;
    cout<<"the difference is : "<<res1<<" + "<<res2<<"i"<<endl;
}
void calculator :: multiComplex(complex c1, complex c2){
    res1 = ((c1.real * c2.real) - (c1.img * c2.img));
    res2 = ((c1.img * c2.real) + (c1.real * c2.img));
    cout<<"the multiplication is : "<<res1<<" + "<<res2<<"i"<<endl;
}
void calculator :: divComplex(complex c1, complex c2){
    int denominator = ((c2.real * c2.real)+(c2.img * c2.img));
    res1 = ((c1.real * c2.real) + (c1.img * c2.img));
    res2 = ((c2.real * c1.img) - (c1.real * c2.img));
    cout<<"the division is : "<<res1/denominator<<" + "<<res2/denominator<<"i"<<endl;
}

int main(){
    complex c1,c2;
    c1.setNum(5,6);
    c2.setNum(7,8);

    calculator cal;
    cal.sumComplex(c1,c2);
    cal.subComplex(c1,c2);
    cal.multiComplex(c1,c2);
    cal.divComplex(c1,c2);
    return 0;

}