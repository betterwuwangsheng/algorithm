#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

vector<LL> vt;

//快速幂取模(当数很大时，相乘long long也会超出的解决办法)
LL qmul(LL a, LL b, LL mod) { // 乘法防止溢出， 如果p * p不爆LL的话可以直接乘； O(1)乘法或者转化成二进制加法(快速加)
    LL ans = 0;
    while(b) {
        if(b & 1)
            ans = (ans + a) % mod;
        a = a * 2 % mod;
        b >>= 1;
    }
    return ans;
}


/**
    当几个数连乘最后取模时，
    可将每个数字先取模，最后再取模,即%对于*具有结合律。
    但如果当用来取模的数本身就很大时，采取上述方法就不行了。
    这个时候可以借鉴快速幂取模的方法，来达到大数相乘取模的效果。
*/
LL qpow(LL a, LL b, LL mod) {
    LL ans = 1;
    while(b) {
        if(b & 1)
            ans = qmul(ans, a, mod);
        a = qmul(a, a, mod);
        b >>= 1;
    }
    return ans;
}

int main() {

    LL n, m;
    while(cin >> n >> m) {
        vt.clear();
        LL a = 2;
        for (int i = 1; i <= n; ++i) {
            if (i == n) {
                a = qpow(2, a, m);
                vt.push_back(a);
            } else
               a = qpow(2, a, m);
        }
        cout << vt[0] << endl;
    }
    return 0;
}
