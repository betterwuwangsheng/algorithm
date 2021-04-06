#include <bits/stdc++.h>

using namespace std;

int t[110]; //时间
int v[110]; //价值
int dp[1010]; //背包所能获得的最大价值 ====> 由二维变为一维(每一次的改变只与上一行相关) 减少空间复杂度


int main() {

    int T, m;
    cin >> T >> m;
    for(int i = 1; i <= m; ++i) //读入时间和价值
        cin >> t[i] >> v[i];
    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= m; ++i) {
        for(int j = T; j >= t[i]; --j) {//从后往前递推推(使用上一次的数据)
            dp[j] = max(dp[j], dp[j - t[i]] + v[i]);
        }
    }
    cout << dp[T] << endl;//输出背包容量大小的最大价值
    return 0;
}
