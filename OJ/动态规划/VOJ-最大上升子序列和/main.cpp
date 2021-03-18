#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1010;
int a[MAXN];
int dp[MAXN];//以 a[i] 为结束位置的最大上升子序列和

int main() {
    int n;
    while(cin >> n) {

        memset(dp, 0, sizeof(dp));

        for(int i = 0; i < n; ++i)
            cin >> a[i];
        for(int i = 0; i < n; ++i) {
            dp[i] = a[i]; //初始默认以 a[i] 为结束位置的最大上升子序列和为 a[i]
            for(int j = 0; j < i; ++j) {
                if(a[i] > a[j])
                    dp[i] = max(dp[i], dp[j] + a[i]); //前一位置的最大子序列和 + a[i] -> 新的子序列和
            }
        }

        sort(dp, dp + n);
        printf("%d\n", dp[n - 1]);
    }
    return 0;
}
