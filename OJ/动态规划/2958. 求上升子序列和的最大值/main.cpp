#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5010;
int a[MAXN];
int dp[MAXN];//dp[i]表示以a[i]为结尾的最大增序列和

int main() {
    int t;
    cin >> t;
    int caseNUm = 0;
    while(t--) {
        int n;
        cin >> n;
        memset(dp, 0, sizeof(dp));

        for(int i = 0; i < n; ++i)
            cin >> a[i];

        for(int i = 0; i < n; ++i) {
            dp[i] = a[i]; //初始化以a[i]为结尾的最大增序列和为a[i]
            for(int j = 0; j < i; ++j) {
                if(a[i] > a[j]) //上升序列
                    dp[i] = max(dp[i], dp[j] + a[i]); //
            }
        }

        sort(dp, dp + n);
        printf("case #%d:\n%d\n", caseNUm++, dp[n - 1]);
    }
    return 0;
}
