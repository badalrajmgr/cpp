#include<iostream>
using namespace std;

class Stack{
    public: 
    int arr[5];
    int idx = -1;

    

    void push(int val){
        idx++;
        
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1) {
            cout<<"the stack is empty";
            return;
        }
        idx--;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
    }
    void top(){
        cout<<"top element is : "<<arr[idx]<<" "<<endl;
    }
    void size(){
        if(idx==0){
            cout<<"size is empty";
            return;
        }
        cout<<"size is : "<<idx+1<<" "<<endl;
    }

};
int main(){
    Stack st;
    st.push(50);
    st.push(60);
    st.push(10);
    st.push(20);
    st.top();
    st.size();
    st.display();
}