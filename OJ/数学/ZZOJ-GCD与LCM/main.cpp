#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF) {
            int g = __gcd(a, b);
            int l = a / g * b;
        printf("%d %d\n", l, g);
    }
    return 0;
}
