#include<iostream>
#include<stack>
using namespace std;
/*
stack<int> insertAtBottom(stack<int> &input){
    stack<int> temp;
    while(! input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    
    input.push(50); // this is the point where x got inserted at the bottom
    while(! temp.empty()){
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
    return input;
}
*/

void insertAtBottom_2(stack<int> &input, int n){
    if(input.empty()){
        input.push(n);
        return;
    }
    int curr = input.top();
    input.pop();
    insertAtBottom_2(input, n);
    input.push(curr);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    insertAtBottom_2(st,100);
    while(! st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
   

}