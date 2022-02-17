#include <algorithm>
#include <iostream>

using namespace std;

typedef long long LL;

int n, a[100010];

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);

    LL sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] != a[n - 1])
            sum += a[i];
    }
    printf("%lld\n", sum);
    return 0;
}