#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3 + 10;
int a[MAXN][MAXN];
int dp[MAXN][MAXN];//从起点到第 i 层第 j 个节点的最大值

int main() {
    int n;
    while(cin >> n) {
        for(int i = 1; i <= n; ++i) {//行
            for(int j = 1; j <= i; ++j) {//列
                scanf("%d", &a[i][j]);
            }
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {

                //同一列或者左斜上方的最大值
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
            }
        }

        int maxx = 0;
        for(int i = 1; i <= n; ++i)
            maxx = max(dp[n][i], maxx);
        printf("%d\n", maxx);
    }
    return 0;
}
