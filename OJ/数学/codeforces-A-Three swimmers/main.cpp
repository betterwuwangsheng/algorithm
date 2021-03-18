#include <bits/stdc++.h>

using namespace std;

//10^18
typedef long long LL;

int main() {
    LL t, a, b, c, p;
    scanf("%lld", &t);
    while (t--) {
        scanf("%lld%lld%lld%lld", &p, &a, &b, &c);
        a = (a - p % a) % a;
        b = (b - p % b) % b;
        c = (c - p % c) % c;

        //输出最少时间
        printf("%lld\n", min(a, min(b, c)));
    }
    return 0;
}
