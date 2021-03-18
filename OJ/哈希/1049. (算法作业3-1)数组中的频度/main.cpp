#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    map<LL, LL> mp;
    for (int i = 0; i < n; ++i) {
        LL num;
        scanf("%lld", &num);
        mp[num]++;
    }
    for (int i = 0; i < m; ++i) {
        int query;
        scanf("%d", &query);
        printf("%lld\n", mp[query]);
    }
    return 0;
}
