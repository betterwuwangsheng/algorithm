#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int a[MAXN];
int dp[MAXN]; //记录以 a[i] 为结束位置的和最大子序列
int main() {

    int t;
    cin >> t;
    while(t--) {

        int n;
        cin >> n;

        for(int i = 1; i <= n; ++i){
            cin >> a[i];
            dp[i] = a[i];
        }

        for(int i = 1; i <= n; ++i)
            dp[i] = max(dp[i - 1], dp[i] + a[i]);

        sort(dp, dp + n);
        cout << dp[n] << endl;
    }
    return 0;
}
