#include <iostream>

using namespace std;

typedef long long LL;

int t, n;
LL ai, sum_odd, sum_even;

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        sum_odd = 0;
        sum_even = 0;
        while (n--) {
            scanf("%lld", &ai);
            if (ai & 1)
                sum_odd += ai;
            else
                sum_even += ai;
        }

        printf("%lld\n", abs(sum_odd - sum_even));
    }
    return 0;
}