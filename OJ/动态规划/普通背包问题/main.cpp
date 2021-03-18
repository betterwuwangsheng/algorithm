#include <bits/stdc++.h>

using namespace std;

/**
    weight[i] -> 存储重量
    value[i] -> 价值
    dp[i][j]: i -> 背包重量
              j -> 存放的物品编号
              选第 i 个物品 -> dp[i-1][j-weight[i]] + value[i] (价值增加，背包可容纳重量减少)
              不选第 i 个物品 -> dp[i-1][j] (价值不增加)

              dp[i][j] = max(dp[i-1][j-weight[i]] + value[i], dp[i-1][j])
*/

#define ll long long

const ll maxn=100;
ll n,v,f[maxn][maxn];
ll c[maxn];//每个物品占用空间
ll w[maxn];//每个物品的价值
int main() {
    cin >> n >> v;
    for(ll i = 1; i <= n; i++)
        scanf("%lld", &c[i]);
    for(ll i = 1; i <= n; i++)
        scanf("%lld", &w[i]);
    for(ll i = 1; i <= n; i++) //第i个物品
        for(ll j = v; j >= 0; j--) { //剩余空间j
            if(j >= c[i])//如果装得下
                f[i][j] = max(f[i - 1][j - c[i]] + w[i], f[i - 1][j]);
            else//如果装不下
                f[i][j] = f[i - 1][j];
        }
    cout << f[n][v] << endl;//输出答案
}
