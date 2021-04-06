#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100100;
int w[MAXN], p[MAXN], dp[MAXN];
int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(dp, 0, sizeof(dp));
        // n 物品
        // m 背包容量
        int n, m;
        cin >> n >> m;

        //读入 n 个物品的重量和价值
        for (int i = 1; i <= n; ++i)
            cin >> w[i] >> p[i];

        for (int i = 1; i <= n; ++i) {
            for (int j = m; j >= w[i]; --j)
                dp[j] = max(dp[j], dp[j - w[i]] + p[i]);
        }
        cout << dp[m] << endl;  //输出的 dp 行的最后一个元素(行 -> 背包容量)
    }
    return 0;
}
