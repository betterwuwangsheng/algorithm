#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ll n, m, a;
    scanf("%lld%lld%lld", &n, &m, &a);
    ll nc = n / a + (n % a ? 1 : 0);  //长需要多少块
    ll mc = m / a + (m % a ? 1 : 0);  //宽需要多少块
    printf("%lld\n", nc * mc);        //乘积即总数
    return 0;
}
