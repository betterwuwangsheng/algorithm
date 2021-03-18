#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ULL;

ULL q_pow(ULL a, ULL b, ULL p) {
    ULL ans = 1 % p;
    while(b) {
        if(b & 1)
            ans = ans * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return ans;
}
int main() {
    ULL a, b, p;
    cin >> a >> b >> p;
    cout << q_pow(a, b, p) << endl;
    return 0;
}
