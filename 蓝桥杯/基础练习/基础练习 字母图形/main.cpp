#include <bits/stdc++.h>

using namespace std;

int n, m;
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%c", abs(i - j) + 'A');
        }
        puts("");
    }
    return 0;
}
