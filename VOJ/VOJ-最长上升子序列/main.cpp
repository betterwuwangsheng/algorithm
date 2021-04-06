#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1010;
int a[MAXN];
int dp[MAXN];//表示以 a[i] 位置为结束位置的最长上升子序列的长度

int main() {
    int n;
    while(cin >> n) {
        for(int i = 0; i < n; ++i)
            cin >> a[i];

        memset(dp, 0, sizeof(dp));

        for(int i = 0; i < n; ++i) {
            dp[i] = 1;//初始时以 a[i] 位置为结束位置的最长上升子序列的长度为 1
            for(int j = 0; j < i; ++j) {
                if(a[i] > a[j])
                    dp[i] = max(dp[i], dp[j] + 1); //跟新最大值
            }
        }

        sort(dp, dp + n);
        cout << dp[n - 1] << endl;
    }
    return 0;
}
