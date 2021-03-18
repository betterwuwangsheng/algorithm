#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ULL;

ULL dp[74];
void solve() {
    dp[0] = 0;
    dp[1] = dp[2] = 1;

    for(int i = 3; i < 74; ++i)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}
int main() {

    solve();

    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        int num;
        cin >> num;
        printf("case #%d:\n%lld\n", caseNum++, dp[num]);
    }
    return 0;
}
