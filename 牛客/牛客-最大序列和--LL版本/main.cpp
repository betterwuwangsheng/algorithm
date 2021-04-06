#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const int MAXN = 1e6 + 10;
LL a[MAXN];
LL dp[MAXN];//记录以 a[i] 为结束位置的最大子序列和

int main() {
    int n;
    while(cin >> n) {
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        memset(dp, 0, sizeof(dp));

        for(int i = 0; i < n; ++i){
                dp[i] = a[i]; //初始时默认以 a[i] 为结束位置的最大子序列和为自身

                //最大值 = 之前位置的最大子序列和（dp[i - 1]） + 新的位置的数值
                dp[i] = max(dp[i - 1] + a[i], a[i]); // 更新最大值
        }
        sort(dp, dp + n);
        cout << dp[n - 1] << endl;
    }
    return 0;
}
