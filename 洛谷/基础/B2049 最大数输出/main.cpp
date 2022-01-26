#include <climits>
#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    ll num, mx;
    for (int i = 0; i < 3; ++i) {
        if (i == 0) {
            scanf("%lld", &num);
            mx = num;
        } else {
            scanf("%lld", &num);
            if (mx < num)
                mx = num;
        }
    }
    printf("%lld", mx);
    return 0;
}

// int main() {
//     ll a, b, c;
//     scanf("%lld %lld %lld", &a, &b, &c);
//     printf("%lld", max(max(a, b), c));
//     return 0;
// }