#include <bits/stdc++.h>

using namespace std;

const int MX = 1e3 + 10;
long long sum = 0;
int n, a[MX];
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        a[i] = a[i] * 1001 + i;
    }

    sort(a + 1, a + 1 + n);

    for(int i = 1; i <= n; i++){
        printf("%d ", a[i] % 1001);
        sum += a[i] / 1001 * (n - i);
    }
    printf("\n%.2lf\n", 1.0 * sum / n);
    return 0;
}
