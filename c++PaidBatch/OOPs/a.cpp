//DISTANCE BETWEEN TWO POINTS


#include<iostream>
#include<math.h>
using namespace std;

class points{
    friend class calculator;
    int x;
    int y;
    public:
        points(int a, int b){
            x = a;
            y = b;
        }
        void display(){
            cout<<"The given point "<<"is ("<<x<<" , "<<y<<")"<<endl;
        }
};

class calculator{
    int dist;
    public:
        calculator(points a, points b){
            dist = sqrt(pow((a.x - b.x) , 2) + pow((a.y - b.y) , 2));
        }
        void distance(points a , points b){
            cout<<"Distance between these points are : "<<dist;
        }
};

int main(){
    points a(0,1);
    points b(0,6);

    a.display();
    b.display();

    calculator d(a,b);
    d.distance(a,b);

    return 0;
   
}