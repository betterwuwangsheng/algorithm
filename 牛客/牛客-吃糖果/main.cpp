#include <bits/stdc++.h>

using namespace std;

int dp[1000];
void solve(){
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i < 1000; ++i)
        dp[i] = dp[i - 1] + dp[i - 2];

}
int main() {

    solve();
    int n;
    while(cin >> n){
            cout << dp[n] << endl;
    }
    return 0;
}
