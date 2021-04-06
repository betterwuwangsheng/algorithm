#include <bits/stdc++.h>

using namespace std;

const int MAXN = 39;
int v[MAXN];
int dp[20009];

int main() {
    int V, n;
    while(scanf("%d%d", &V, &n) != EOF) {
        for(int i = 1; i <= n; ++i)
            scanf("%d", &v[i]);
        memset(dp, 0, sizeof(dp));

        for(int i = 1; i <= n; ++i) {
            for(int j = V; j >= v[i]; --j) {
                dp[j] = max(dp[j], dp[j -v[i]] + v[i]);
            }
        }
        printf("%d\n", V - dp[V]);
    }
    return 0;
}
