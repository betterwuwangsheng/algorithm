#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//在给定的 n 个数中，寻找一个给定的数值，最多需要找多少次
int main() {
    int n;
    ll a, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", &a);

    while (n) {
        n /= 2;  //不断除以 2, 直到 n = 0
        ans++;
    }
    printf("%lld\n", ans);
}
