#include <algorithm>
#include <iostream>

using namespace std;

const int MX = 2e5 + 10;
int n;
int a[MX];
int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; ++i)
        if (i != n - 1)
            printf("%d ", a[i]);
        else
            printf("%d\n", a[n - 1]);
    return 0;
}