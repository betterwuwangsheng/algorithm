#include <algorithm>
#include <iostream>

using namespace std;

typedef long long LL;

const int MAXN = 1e5 + 10;
const LL a[MAXN] = {0};

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
    }

    LL res = a[0];
    for (int i = 1; i < n; ++i) {
        res ^= a[i];
    }
    printf("%lld", res);
    return 0;
}