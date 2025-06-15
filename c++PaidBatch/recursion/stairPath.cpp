#include<isotream>
using namespace std;

int stPath(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stPath(n-1)+stPath(n-2);
}

int main(){
    int num;
    num = stPath(6);
    cout<<num;
}

/*            _
            _|
          _|
        _|
      _|
    _|    

*/