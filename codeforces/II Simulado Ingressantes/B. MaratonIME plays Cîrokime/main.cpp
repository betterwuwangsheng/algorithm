#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//�ڸ����� n �����У�Ѱ��һ����������ֵ�������Ҫ�Ҷ��ٴ�
int main() {
    int n;
    ll a, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", &a);

    while (n) {
        n /= 2;  //���ϳ��� 2, ֱ�� n = 0
        ans++;
    }
    printf("%lld\n", ans);
}
