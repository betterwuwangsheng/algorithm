#include <bits/stdc++.h>

using namespace std;

//01背包问题
int n; //数量，背包容量 //数量和容量相同
int dp[1010];
int v[1010];//价格
int main() {
    while(cin >> n) {
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j < i; ++j) {
                if(i % j == 0) {
                    v[i] += j;
                }
            }
        }

        for(int i = 1; i <= n; ++i) {
            for(int j = n; j >= i; --j) {//i 相当于体积
                dp[j] = max(dp[j], dp[j - i] + v[i]);
            }
        }

        cout << dp[n] << endl;
    }
    return 0;
}
