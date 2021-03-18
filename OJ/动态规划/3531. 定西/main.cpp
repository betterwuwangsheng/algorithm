#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
int dp[MAXN];//心走方法总数
bool broke[MAXN];//标记损坏的楼梯

int main() {
    memset(broke, false, sizeof(broke));
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int num;
        cin >> num;
        broke[num] = true; //标记坏楼梯
    }
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        if(broke[i]) //
            dp[i] = 0;
        else {
            if(i >= 3)
                dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
            else if(i >= 2) {
                dp[i] = dp[i - 1] + dp[i - 2];
            } else {
                dp[i] = dp[i - 1];
            }
        }
    }
    cout << dp[n] <<endl;
    return 0;
}
