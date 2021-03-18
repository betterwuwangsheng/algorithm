#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

//非递归
LL qpow(LL a, LL b, LL c) {

    //(A*A*A)%C==(((A*A)%C)*A)%C
    int ans = 1;
    while(b) {
        if(b & 1) //末尾为1
            ans = (ans * a) % c; //得积
        a = (a * a) % c; //自乘
        b >>= 1; //右移一位
    }
    return ans;
}
int main() {
    int a, b,c;
    while(scanf("%d%d%d", &a, &b, &c) != EOF && a && b && c) {
        printf("%lld\n",qpow(a, b, c));
    }
    return 0;
}
