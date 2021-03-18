#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const int MOD = 1e9;
const int MAXN = 1e6 + 10;

LL dp[MAXN];//记录 i 的拆分方式数目

void init() {
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i < MAXN; ++i)
        if(i & 1)//奇数 = 偶数 + 1 => 前一个数的拆分方式数目 f(2m + 1) = f(2m)，
            dp[i] = dp[i - 1];//偶数 -> 前一个数的
        else //偶数 =    f(2m) = f(2m - 1) + f(m)，
            dp[i] = (dp[i / 2] + dp[i - 2]) % MOD;
}
int main() {

    init();
    LL n;
    while(cin >> n) {
        cout << dp[n] << endl;
    }
    return 0;
}
