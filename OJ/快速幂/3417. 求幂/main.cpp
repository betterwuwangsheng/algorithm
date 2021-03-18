#include <bits/stdc++.h>

using namespace std;

//快速幂
long long int quick_pow(int a, int b) {

    // 0 次方 = 1
    if(b == 0)
        return 1;

    //1 次方 = 本身
    else if(b == 1)
        return a;

    //幂为奇数
    else if(b & 1) {

        //(n + n) + 1
        return a * quick_pow(a, b - 1);
    } else {

        //幂为偶数 -> (n/2 + n/2)
        long long ans = quick_pow(a, b >> 1);
        return ans * ans;
    }
}
int main() {
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF) {
        printf("%lld\n", quick_pow(a, b));
    }
    return 0;
}
