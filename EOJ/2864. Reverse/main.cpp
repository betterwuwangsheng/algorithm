#include <bits/stdc++.h>

using namespace std;

/**
单点时限: 2.0 sec

内存限制: 256 MB

正整数的逆串定于为从低位到高位，依次连接各数位上的数字所形成的字符串，如 321
的逆串为 123。

输入格式
一个不多于 8 位的正整数 N

输出格式
请输出正整数 N 的位数及其逆串，以一个空格隔开

样例
input
3210
output
*/
int a[9];

int main() {
    int N, cnt = 0, sum;
    scanf("%d", &N);

    cnt = 0;
    sum = 0;
    while (N) {
        a[cnt] = N % 10;
        N = N / 10;
        cnt++;
    }
    printf("%d ", cnt);

    for (int i = 0; i < cnt; i++) {
        printf("%d", a[i]);
    }
    return 0;
}
