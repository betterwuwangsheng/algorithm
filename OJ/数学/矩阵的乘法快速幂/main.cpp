#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
const int MAXN = 120;
typedef long long LL;

LL n, k;
struct M {
    LL a[MAXN][MAXN];
};

//矩阵乘法
M mul(M a, M b) {

    //存储结果
    M c;
    memset(c.a, 0, sizeof(c.a));

    for(int i = 0; i < n; ++i) {//行
        for(int j = 0; j < n; ++j) {//找到 c.a[i][j]，开始算
            for(int k = 0; k < n; ++k) { //列
                c.a[i][j] += a.a[i][k] * b.a[k][j];
                c.a[i][j] %= MOD;
            }
        }
    }
    return c;
}

//矩阵快速幂(类似 普通快速幂)
M qpow(M a, LL b) {
    M ans;
    memset(ans.a, 0, sizeof(ans.a));

    //矩阵的元素全为 1 ==>> int ans = 1
    for(int i = 0; i < n; ++i)
        ans.a[i][i] = 1;

    //循环
    while(b) {
        if(b & 1)
            ans = mul(ans, a);
        a = mul(a, a);
        b >>= 1;
    }
    return ans;
}

int main() {
    scanf("%lld%lld", &n, &k);

    M input;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            scanf("%lld", &input.a[i][j]);
    }

    M ans = qpow(input, k);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%lld ", ans.a[i][j]);
        printf("\n");
    }
    return 0;
}
