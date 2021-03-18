#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int N = 1e5 + 10;
int h[N], w[N];

//N  块巧克力中切出 K 块巧克力
//NN 块巧克力，其中第 i 块是 Hi×Wi 的方格组成的长方形
int n, k;

bool check(int mid) {

    //记录分成长度为 mid 的巧克力数量
    LL res = 0;
    for(int i = 0 ; i < n; ++i) {
        res += (LL)(h[i] / mid) * (w[i] / mid);
    }

    //大于要求数量，返回真
    if(res >= k)
        return true;
    return false;
}
int main() {
    scanf("%d%d", &n, &k);

    for(int i = 0; i < n; ++i) {
        scanf("%d%d", &h[i], &w[i]);
    }

    //1≤N,K≤1e5 ,
    //1≤Hi,Wi≤1e5
    int l = 0, r = 1e5;

    LL res = -1;
    //二分法求最大的边长
    while(l <= r) {
        int mid = (l + r) / 2;

        if(check(mid)) {

            //边长可行 —>[mid, r] 可能还有更大的解
            res = mid;
            l = mid + 1;

        } else {

            //不可行
            r = mid - 1;
        }
    }

    printf("%lld\n", res);
    return 0;
}
