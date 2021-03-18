#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50100;
int a[MAXN];
int dp[MAXN];//dp[i]表示以 a[i]为结尾的最大增序列长度

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i  = 0; i < n; ++i) {
        dp[i] = 1; //初始默认以 a[i]为结尾的最大增序列长度 1
        for(int j = 0; j < i; ++j) {
            if(a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1); //dp[i] + 1 前一位置以 a[i]为结尾的最大增序列长度 + 1(a[i])
        }
    }
    sort(dp, dp + n);
    printf("%d\n", dp[n - 1]);

    return 0;
}
