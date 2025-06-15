// not completed

#include<iostream>
using namespace std;

class original{  
    int roll_no;
    public:
        void setData(int x){
            roll_no = x;
        }
        void getData(){
            cout<<"roll no is : "<<roll_no<<endl;
        }
        friend void swap();     
};

class duplicate{
    int registration_no;
    public:
        void setData(int x){
            registration_no = x;
        }
        void getData(){
            cout<<"Registration no is : "<<registration_no<<endl;
        }
        friend void swap();
};
void swap(){
    int temp;
    temp = registration_no;
    registration_no = roll_no;
    roll_no = temp;

    cout<<"roll no is : "<<roll_no<<endl;
    cout<<"registration no is : "<<registration_no<<endl;
}

int main(){
    original a;
    a.setData(41);
    a.getData();
    duplicate b;
    b.setData(110041);
    b.getData();
    
    swap();
    return 0;
}