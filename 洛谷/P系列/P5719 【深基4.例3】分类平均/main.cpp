#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, suma = 0, sumb = 0, cnta = 0, cntb = 0;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {  // A Àà
            suma += i;
            cnta++;
        } else {
            sumb += i;
            cntb++;
        }
    }

    printf("%.1lf %.1lf\n", (double)suma / cnta, (double)sumb / cntb);
    return 0;
}