#include <bits/stdc++.h>

using namespace std;

const int  MAXN = 110;
int price[MAXN] = {1};

int dp[1010] = {1};//代表剩余钱 为 i 时的方案
int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; ++i) {
        cin >> price[i];
        for(int j = m; j >= price[i]; --j) {
            dp[j] = dp[j] + dp[j - price[i]]; //更新方案数量
        }
    }

    cout << dp[m] << endl;
    return 0;
}
