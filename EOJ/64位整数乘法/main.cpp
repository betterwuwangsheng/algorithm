#include <bits/stdc++.h>

using namespace std;

/**
    a * b
    a + a + a....+ a
    a * 1 = a
    a * 2 = 2a
    a * 4 = 8a
    a * (2^k) = 2^k * a
*/
typedef unsigned long long  ULL;

ULL qpow(ULL a, ULL b, ULL p) {
    ULL ans = 1 % p;
    while(b) {
        if(b & 1)
            ans = ans * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return ans;
}

//64位整数乘法
ULL solve(ULL a, ULL b, ULL p) {
    ULL ans = 0;
    while(b) {
        if(b & 1)
            ans = (ans + a) % p;
        b >>= 1;
        a = a * 2 % p;
    }
    return ans;
}

int main() {

    cout << qpow(2, 3, 1) << endl;
    cout << solve(111, 999, 11) << endl;
    return 0;
}
