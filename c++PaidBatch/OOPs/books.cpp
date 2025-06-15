#include<iostream>
using namespace std;

class book{
    private:
        char name;
        int price;
        int no_of_pages;
        int count = 0;
    public:
        void setdata(char a, int b, int c){
            this->name = a;
            this->price = b;
            this->no_of_pages = c;
        }
        int countBooks(int price){
            if(this->price <= price){
                count++;
            }
            return count;
        }
        bool isBookPresent(char title){
            if(this->title == name){
                return true;
            }
            return false;
        }
};

int main(){
    book b1,b2,b3;
    b1.setdata('a', 1200, 500);
    b2.setdata('b', 900, 250);
    b3.setdata('c', 5000, 200);

    cout<<countBook();
}