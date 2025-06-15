#include<iostream>
using namespace std;
class calculator{
    int num1;
    int num2;
    public: 
        calculator(int a, int b){
            num1 = a;
            num2 = b;
        }
        calculator(calculator &calc){
            cout<<"copy constructor called!!!"<<endl;
            num1 = calc.num1;
            num2 = calc.num2;
        }
        void display(){
            cout<<num1<<" "<<num2<<endl;
        }
};
int main(){
    calculator a(4,5);
    a.display();
    calculator b(a);
    b.display();
}