#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
int a[N];

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    sort(a, a + n);
    for(int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}
