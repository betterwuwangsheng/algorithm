#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int a, b, c, d, e, f, g, h;
        scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h);
        printf("%d\n", (a + g) * 1000 + (c + b) * 100 + (f + d) * 10 + h + e);
    }
    return 0;
}