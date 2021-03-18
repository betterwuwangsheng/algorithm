#include <bits/stdc++.h>

using namespace std;

int main() {
    int d, k;
    scanf("%d%d", &d, &k);
    double ans = 0;
    k = min(k, 100);
    while(k) {
        ans = 1.0 / (1.0 + 1.0 * (k - 1) * d + ans);
        k--;
    }
    printf("%.16f\n", ans);
    return 0;
}
