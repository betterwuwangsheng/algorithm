#include <bits/stdc++.h>

using namespace std;

/**
            1	2	3	4	5	6	7
    三进制	1	10	11	100	101	110	111
    十进制	1	3	4	9	10	12	13

    类似快速幂
    int quickPower(int a, int b)//是求a的b次方
    {
        int ans = 1, base = a;//ans为答案，base为a^(2^n)
        while(b > 0)//b是一个变化的二进制数，如果还没有用完
        {
            if(b & 1)//&是位运算，b&1表示b在二进制下最后一位是不是1，如果是：
                ans *= base;//把ans乘上对应的a^(2^n)

            base *= base;//base自乘，由a^(2^n)变成a^(2^(n+1))
            b >>= 1;//位运算，b右移一位，如101变成10（把最右边的1移掉了），10010变成1001。现在b在二进制下最后一位是刚刚的倒数第二位。结合上面b & 1食用更佳
        }
        return ans;
    }
*/
long long ans, base = 1;
int k, n;
int main() {
    scanf("%d%d", &k, &n);
    while(n) {
        if(n & 1)
            ans += base;
        base *= k;
        n >>= 1;
    }
    printf("%lld", ans);
    return 0;
}
