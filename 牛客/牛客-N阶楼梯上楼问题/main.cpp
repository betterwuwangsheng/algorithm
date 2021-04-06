#include <bits/stdc++.h>

using namespace std;
const int MAXN = 100;
int dp[MAXN]; //当楼梯阶数是N时的上楼方式个数

int main() {

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= MAXN; ++i)

        //两种方式
        //从 n - 1 走到 n
        //从 n - 2 走到 n
        dp[i] = dp[i - 1] + dp[i - 2];
    int n;
    while(cin >> n) {
        cout << dp[n] << endl;
    }
    return 0;
}
