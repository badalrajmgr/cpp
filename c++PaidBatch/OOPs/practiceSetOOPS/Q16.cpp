#include<iostream>
using namespace std;

class number{
    int count=0;
    public:
        number(){
            count++;
            cout<<"constructor is called !!!"<<endl;
        }
        ~number(){
            cout<<"distructor is called !!!"<<endl;
            count--;
        }
};
int main(){
    cout<<"we are inside main function"<<endl;
    cout<<"creating 1st object"<<endl;
    number O1;
    return 0;
}