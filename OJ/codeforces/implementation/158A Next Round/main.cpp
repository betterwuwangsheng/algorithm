#include <bits/stdc++.h>

using namespace std;

#define N 51

int main() {
    int n, k, i, cnt = 0;
    scanf("%d%d", &n, &k);
    int a[N];
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i <= n; i++) {
        if (a[i] && a[i] >= a[k])
            cnt++;
    }
    printf("%d\n", cnt);
}
