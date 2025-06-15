#include<iostream>
using namespace std;

class complex{
    friend complex sumComp(complex o1, complex o2);
    int real;
    int img;
    public:
        void setData(int real, int img){
            this->real = real;
            this->img = img;
        }
        void getData(){
            cout<<this->real<<" + i"<<this->img<<endl;
        }
};
complex sumComp(complex o1, complex o2){
    complex o3;
    o3.setData((o1.real+o2.real),(o1.img+o2.img));
    return o3; //function returning an object
}

int main(){
    complex c1,c2,sum;
    c1.setData(5,6);
     c1.getData();
    c2.setData(6,3);
     c2.getData();
     cout<<"------"<<endl;
    sum = sumComp(c1,c2);
    sum.getData();
    return 0;
}