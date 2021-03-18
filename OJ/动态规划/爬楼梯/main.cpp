#include <bits/stdc++.h>

using namespace std;

int dp[50];
int main() {

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i < 50; ++i)
        dp[i] = dp[i - 1] + dp[i - 2];

    int num;
    while(cin >> num) {
        cout << dp[num] << endl;
    }
    return 0;
}
