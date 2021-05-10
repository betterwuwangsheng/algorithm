#include <bits/stdc++.h>

using namespace std;

int main() {

    // n, n, k分别男士人数、女士人数、几轮舞曲。
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);
    for (int i = 0; i < k; i++) {
        printf("%d %d\n", (i % m) + 1, (i % n) + 1);
    }
    return 0;
}
