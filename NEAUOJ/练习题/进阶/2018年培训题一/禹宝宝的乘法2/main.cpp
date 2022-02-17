#include <iostream>

using namespace std;

typedef long long LL;

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        LL a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a * b);
    }
    return 0;
}