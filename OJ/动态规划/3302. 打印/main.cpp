#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e7 + 10;
LL dp[MAXN];

int main() {
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);

    dp[0] = 0;
    dp[1] = x;

    for(int i = 1; i <= n; ++i)
        if(i & 1) //奇数个字符

            //前一个的最小时间 + 插入一个的时间
            //或者是复制 +
            dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + x);
        else //偶数个字符
            dp[i] = min(dp[i - 1] + x, dp[i / 2] + y);
    printf("%lld\n", dp[n]);
    return 0;
}
