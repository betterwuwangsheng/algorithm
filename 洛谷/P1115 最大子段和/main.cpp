#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5 + 10;
int a[MAXN];
int dp[MAXN]; //保存以 a[i] 为结束为止的字段最大和

int main() {
    int n;
    scanf("%d", &n);
    memset(dp, 0, sizeof(dp));
        int sum = -1e9;
        for(int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
            dp[i] = max(dp[i - 1] + a[i], a[i]);
            sum = max(sum, dp[i]); //求和
        }
        printf("%d\n", sum);
    return 0;
}
