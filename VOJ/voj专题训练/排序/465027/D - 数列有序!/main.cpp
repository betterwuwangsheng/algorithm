#include <algorithm>
#include <iostream>

using namespace std;

const int MX = 110;
int a[MX];

int n, m;
int main() {
    while (scanf("%d%d", &n, &m)) {
        if (n == 0 && m == 0)
            break;
        int i;
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        a[n] = m;

        sort(a, a + n + 1);

        for (int i = 0; i < n + 1; ++i)
            printf("%d ", a[i]);
    }
    return 0;
}