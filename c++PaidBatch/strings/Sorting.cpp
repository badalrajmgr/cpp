#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s;
}

// int main(){
//     char ch = ' ';
//     cout<<(int)ch;
// }