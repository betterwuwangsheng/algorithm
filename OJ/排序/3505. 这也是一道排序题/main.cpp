#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1e5 + 10;
ll a[MAXN], b[MAXN];

int main() {
    int n;
    cin >> n;

    //令 b[i] = a[i+1] − a[i]，b 数列有 n - 1 项。
    //对 a[i] 的操作 == 交换 b[i] 与 b[i+1]
    //那么将 b 升序排序后反构造出的 a 数列总和最小
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        b[i] = a[i + 1] - a[i];

    ll sum = a[0];

    //排序
    sort(b, b + n - 1);

    for (int i = 1; i < n; ++i) {
        a[i] = a[i - 1] + b[i - 1];
        sum += a[i];
    }
    printf("%lld\n", sum);
    return 0;
}
