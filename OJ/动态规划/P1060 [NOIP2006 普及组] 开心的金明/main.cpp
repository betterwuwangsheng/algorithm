#include <bits/stdc++.h>

using namespace std;

const int MAXN = 30;

int v[MAXN];//物品价格
int w[MAXN];//每件物品的价格与重要度的乘积
int dp[30010];

int main() {

    //n -> 钱, m -> 物品数量
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; ++i) {
        cin >> v[i] >> w[i];
        w[i] = v[i] * w[i];//每件物品的价格与重要度的乘积
    }

    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= m; ++i) {//依次比较每一个物品。
        for(int j = n; j >= v[i]; --j) {////从大到小循环，依次询问使用这么多钱可获得的最大重要度与价格的乘积，循环到 v[i]
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
        }
    }

    cout << dp[n] << endl;
    return 0;
}
