#include<iostream>
using namespace std;
class Show{
    public:
    void show(int x){
        cout<<"passing int but function name is same\n";
    }
    void show(double x){
        cout<<"passing double but function name is same\n";
    }
    void show(int x, double Y){
        cout<<"passing int and double but function name is same";
    }
};
int main(){
    Show function_overloading;
    function_overloading.show(1);
    function_overloading.show(1.5);
    function_overloading.show(1,2.5);
    return 0;
}