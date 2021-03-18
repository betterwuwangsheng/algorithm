#include <bits/stdc++.h>

using namespace std;

const int MAXN = 39;
int v[MAXN];
int dp[20009];

//剩空间最小 -> 即价值最大
int main() {
    int V, n;
    scanf("%d%d", &V, &n);

    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= n; ++i)
        scanf("%d", &v[i]);

    for(int i = 1; i <= n; ++i) {
        for(int j = V; j >= v[i]; --j) {
            dp[j] = max(dp[j], dp[j - v[i]] + v[i]);
            if(dp[j] == V){ //过程中出现装满的情况
                cout << 0 <<endl;
                return 0;
            }
        }
    }
    printf("%d\n", V - dp[V]);//输出箱子剩余空间
    return 0;
}
