#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>  s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    for(int ele : s){
        cout<<ele<<" "; 
    }
}