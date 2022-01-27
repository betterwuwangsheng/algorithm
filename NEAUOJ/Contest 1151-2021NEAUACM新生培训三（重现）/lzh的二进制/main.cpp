#include <cmath>
#include <iostream>

using namespace std;

int solve(char c[]) {
    int res = 0;
    for (int i = 3; i >= 0; --i) {
        res += (c[i] - '0') * pow(2, 4 - i - 1);
    }
    return res;
}

int T, n, res;
char c[4];
int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%s", &c);
            res = solve(c);
            printf("%d", res);
        }
        printf("\n");
    }
    return 0;
}