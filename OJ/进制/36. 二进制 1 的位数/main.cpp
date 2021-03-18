#include <bits/stdc++.h>

using namespace std;

int PopCount(unsigned n)
/* PreCondition: n 是一个 32 位无符号整数
   PostCondition: 返回 n 的二进制表示中值为 1 的位的位数
*/
{
    int cnt = 0;
    while(n) {
        unsigned a = n % 2;
        if(a == 1)
            cnt++;
        n /= 2;
    }
    return (int)cnt;
}

int main() {
    unsigned int n;
    int t, cas;
    scanf("%u", &n);
    printf("%d\n", PopCount(n));
    return 0;
}
