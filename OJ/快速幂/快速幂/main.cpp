#include <iostream>

using namespace std;

int pow(int b, int p) {
    if(p == 0)
        return 1 ;
    else if(p == 1)
        return b ;
    else if(p & 1)
        return((int) (b * pow(b, p - 1) ));
    else {
        int ans = pow(b, p >> 1);
        return ans * ans ;
    }
}

int pow2(int b, int p) {
    int ans = 1;
    while(p){
        if(p & 1)
            ans = ans * b;
        b = b * b;
        p >>= 1;
    }
    return ans;
}
int main() {
    int a = 3;
    int b = 8;
    cout << pow(a, b) << endl;
    cout << pow2(a, b) << endl;
    return 0;
}
