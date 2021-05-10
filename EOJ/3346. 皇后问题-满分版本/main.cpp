#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 1e5 + 10;

int cnt1[MAXN], cnt2[MAXN], cnt3[MAXN * 2], cnt4[MAXN * 2];
int main() {
    int n, x, y;
    scanf("%d",&n);
    int i;
    ll ans = 0;

    memset(cnt1, 0, sizeof(cnt1));
    memset(cnt2, 0, sizeof(cnt2));
    memset(cnt3, 0, sizeof(cnt3));
    memset(cnt4, 0, sizeof(cnt4));
    for (i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        ans += cnt1[x]; //行
        ans += cnt2[y];//列
        ans += cnt3[x + y];//主对角
        ans += cnt4[x - y + n];//副对角

        //记录对应行，列，对角线位置上冲突皇后的数量
        cnt1[x]++;
        cnt2[y]++;
        cnt3[x + y]++;
        cnt4[x - y + n]++;
    }
    printf("%lld\n",ans);
    return 0;
}
