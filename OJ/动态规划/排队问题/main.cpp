#include <bits/stdc++.h>

typedef long long LL;

LL a[105];//单独购买时间
LL b[105];//一个人购买两张的时间
LL dp[105];//前 i 个人最短排队时间
using namespace std;

/**
    若前 i 个人买票ode方式唯一确定
    eg：第 i - 1 个人买一张票
        则：前 i - 1 个人的买票方式也一定是最优的。
        即最优解包含子问题的最优解
*/
int main() {

    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n; ++i)
        scanf("%lld", &a[i]);

    for(int i = 1; i <= n; ++i)
        scanf("%lld", &b[i]);

    //第一个人只能给自己买票
    dp[1] = a[1];

    //第二个人 -> 前一个人买两张或者两个人单独买
    dp[2] = min(b[1], a[1] + a[2]);
    for(int i = 3; i <= n; ++i) {
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i - 1]);
    }

    printf("%lld\n", dp[n]);
    return 0;
}
