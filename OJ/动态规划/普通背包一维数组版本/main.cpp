#include <bits/stdc++.h>

using namespace std;

int t[110]; //时间
int v[110]; //价值
int dp[1010]; //背包所能获得的最大价值 ====> 由二维变为一维(每一次的改变只与上一行相关) 减少空间复杂度


int main() {

    //T 总采药时间
    //m 草药数目
    int T, m;
    cin >> T >> m;

    for(int i = 1; i <= m; ++i) //读入草药时间和价值
        cin >> t[i] >> v[i];

    //初始化
    memset(dp, 0, sizeof(dp));

    //M 株草药
    for(int i = 1; i <= m; ++i) {

        //采药时间不超过 t[i](从右往左更新 -> 其实未遍历到的还是上一次的数据)
        //j >= t[i] 保证不越界
        for(int j = T; j >= t[i]; --j) {//从后往前递推推(使用上一次的数据)
            dp[j] = max(dp[j], dp[j - t[i]] + v[i]);
        }
    }
    cout << dp[T] << endl;
    return 0;
}
