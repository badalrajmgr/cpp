#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

class calculator{   
    int a,b;
public:
    void process(){
        int a,b;
        char ch;
        cout<<"you can calculate 2 numbers using simple calculator : "<<endl;
        cin>>a>>ch>>b;
        switch(ch){
            case '+' : cout<< a+b <<endl;
            break;
            case '-' : cout<< a-b <<endl;
            break;
            case '*' : cout<< a*b <<endl;
            break;
            case '/' : cout<< a/b <<endl;
            break;
            default: cout<< "you can only use +, -, *, /.";
        }
    }
};

class scientificCalculator{
    int x;
    int y;
public: 
    void process1(){
        int d;
        string c[6];
        cout<<"you can calculate root by typing 'sqrt' and enter "<<endl;
        cout<<"you can calculate square by typing 'square' and enter "<<endl;
        cout<<"you can calculate cube by typing 'cube' and enter "<<endl;

        cin>>c[6];
        

        if(c[6] == "sqrt"){
            cout<<"square root of ";
            cin>>d;
            cout<< sqrt(d);
        }
        if(c[6] == "square"){
            cout<<"square of ";
            cin>>d;
            cout<<d*d;
        }
        if(c[6] == "cube"){
            cout<<"cube of ";
            cin>>d;
            cout<< d*d*d;
        }
        
    }
};

class hybridCalculator : public calculator, public scientificCalculator{
    int z;
    public:
        void process2(){
        
    }
};

int main(){
    hybridCalculator hy;
   // hy.process();
    hy.process1();
    return 0;
}