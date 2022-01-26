#include <iostream>

using namespace std;

typedef long long LL;

const LL ONE = -1;
int n, T;
int main() {
    scanf("%d", &T);
    while (T--) {
        int x, y, z;
        scanf("%d", &n);
        LL max = 0, sum = 1;
        int cnt = 0;
        for (x = 1; x <= n; ++x) {
            for (y = 1; y <= n; ++y) {
                z = n - x - y;
                if (z > 0 && (x + y + z) == n && (n % x == 0) && (n % y == 0) &&
                    (n % z == 0)) {
                    sum = x * y * z;

                    if (sum > max) {
                        max = sum;
                        cnt++;
                    }
                }
            }
        }
        printf("%lld\n", cnt == 0 ? ONE : max);
    }
    return 0;
}