#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, m, k, i, sum;
    int a[1010] = {0};

    scanf("%d", &t);
    while (t--) {
        sum = 0;

        scanf("%d %d", &m, &k);

        for (i = 0; i < m; i++) {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < k; i++) {
            sum += a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
