#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int a[MAXN];
int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    //ÅÅÐò
    sort(a, a + n);

    printf("%d", a[k - 1]);
    return 0;
}