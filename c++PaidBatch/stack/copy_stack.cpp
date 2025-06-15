#include<iostream>
#include<stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(not temp.empty()){
       int curr = temp.top();
       temp.pop();
       result.push(curr);
    }
    return result;
}

int main(){

    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);

    // cout<<"given stack is : "<<endl;
    // while(! st.empty()){
    //     int curr = st.top();
    //     st.pop();
    //     cout<<curr<<" ";
    // }

    cout<<"after copy : "<<endl;

    stack<int> res = copyStack(st);

    while(! res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<" ";
    }

   // return 0;
}


