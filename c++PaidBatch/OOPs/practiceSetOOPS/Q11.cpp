#include<iostream>
using namespace std;

class employ{
    int id;
    static int count; //recording data common to all objects of a class
    public:
        void setData(int a) {
            id = a;
        }
        void getData() {
            cout<<"id is : "<<id<<" and employ no.: "<<++count<<endl;
        }
        static void getCount(){
            cout<<"static count is : "<<count<<endl;
        }
};
int employ::count;

int main(){
    employ GL, KL;
    GL.setData(100);
    GL.getData();
    employ::getCount();

    KL.setData(200);
    KL.getData();
    employ::getCount();

    return 0;

}