#include<iostream>
using namespace std;

class stack{
    int* arr;
    int capacity;
    int top;
    
    public:
    stack(int value){
       capacity = value;
       arr = new int[capacity];
       top = -1; 
    }

    void push(int data){
        if(top == capacity - 1){
            cout<<"overflow\n";
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop(){
        if(top == -1){
            cout<<"underflow\n";
            return;
        }
        top--;
    }
    int top1(){
        if(top == -1){
            cout<<"underflow\n";
            return 0;
        }
        cout<<arr[top];
    }
    
};


int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    st.top1();
}