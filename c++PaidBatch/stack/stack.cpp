#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty(); // Is stack impty or not

    return 0;
}