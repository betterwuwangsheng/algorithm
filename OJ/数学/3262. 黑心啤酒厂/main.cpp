#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
    LL x, n;
    while(scanf("%lld%lld", &x, &n) != EOF){
        for(LL i = 2; i <= n; ++i)
            printf("%lld\n", x / __gcd(x, i) * i / x);
    }
    return 0;
}
