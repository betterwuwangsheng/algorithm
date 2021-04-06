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
        dp[i] = dp[i - 1] + dp[i - 2];
}
int main() {

    init();
    int n;
    while(cin >> n) {
        printf("%lld\n", dp[n]);
    }
    return 0;
}
