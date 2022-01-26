#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        int a, b, c, d;
        for (int i = 0; i < n; ++i) {
            scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
            printf("%d", a * 2 * 2 * 2 + b * 2 * 2 + c * 2 + +d);
        }
        printf("\n");
    }
    return 0;
}