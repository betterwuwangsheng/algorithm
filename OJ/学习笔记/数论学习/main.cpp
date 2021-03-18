#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

const int MAXN =  1e5;

//素数筛 -> 默认素数
int isPrime[MAXN];

//a * b = __gcd(a,b) * lcm(a,b)
//最大公约数
LL gcd(LL a, LL b){
    return b ? gcd(b, a % b) : a;
}

void check(int n) {

    for(int i = 2; i <= n; ++i)
        isPrime[i] = 1;
    for(int i = 2; i * i<= n; ++i) {

        //是素数
        if(isPrime[i])

            //i* i 可能溢出
            for(int j = 2 * i; j <= n; j += i) //去掉倍数

                //标记为不是素数
                isPrime[j] = 0;
    }
}

//快速幂(非递归)
//{a^b} mod c = (a mod c)^b mod c
LL qpow(LL a, LL b, LL MOD) {
    LL ans = 1;
    while(b) {
        if(b & 1) //末尾为 1
            ans = (ans * a) % MOD; //得积
        a = (a * a) % MOD; //自乘
        b >>= 1; // 右移一位
    }
    return ans;
}

LL qpow2(LL a, LL b, LL MOD) {
    if(!b)
        return 1;
    LL ans = qpow(a * a % MOD, b >> 1, MOD);
    if(b & 1)
        ans = ans * a % MOD;
    return ans;
}

//矩阵乘法的快速幂
int main() {

    cout << qpow(2, 4, 100007) << endl;
    cout << qpow2(2, 4, 100007) <<endl;

    for(int i = 1; i < 10000; ++i) {
        check(i);
    }

    int cnt = 0;
    for(int i = 1; i < 10000; ++i) {
        if(isPrime[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;

    //求最大公约数
    cout << __gcd(10, 20) << endl;

    //求最小公倍数 = a * b / 最小公倍数
    cout << 10 * 20 / __gcd(10, 20) << endl;
    return 0;
}
