#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ll n, m, a;
    scanf("%lld%lld%lld", &n, &m, &a);
    ll nc = n / a + (n % a ? 1 : 0);  //����Ҫ���ٿ�
    ll mc = m / a + (m % a ? 1 : 0);  //����Ҫ���ٿ�
    printf("%lld\n", nc * mc);        //�˻�������
    return 0;
}
