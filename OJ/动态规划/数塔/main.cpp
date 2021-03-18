#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
int dp[MAXN][MAXN];

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= i; ++j) {
                cin >> dp[i][j];
            }
        }

        for(int i = n - 1; i >= 1; --i) {
            for(int j = 1; j <= i; ++j) {
                dp[i][j] += max(dp[i + 1][j + 1], dp[i + 1][j]);
            }
        }
        cout << dp[1][1] << endl;
    }
    return 0;
}
