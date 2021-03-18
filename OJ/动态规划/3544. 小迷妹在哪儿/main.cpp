#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int score[MAXN]; //分数
int t[MAXN];//游戏剩余时间
int dp[MAXN];//在游戏中最多拿多少分

int main() {
    int n, T;
    scanf("%d%d", &n, &T);

    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= n; ++i) {
        scanf("%d%d", &score[i], &t[i]);
        score[i] = score[i] * (T - t[i]);
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = T; j >= t[i]; --j) {
            dp[j] = max(dp[j], dp[j - t[i]] + score[i]);
        }
    }

    printf("%d\n", dp[T]);
    return 0;
}
