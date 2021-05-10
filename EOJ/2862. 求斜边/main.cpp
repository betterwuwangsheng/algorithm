#include <bits/stdc++.h>

using namespace std;

/**
单点时限: 2.0 sec

内存限制: 256 MB

有一个直角三角形，已知两直角边长度，求斜边长度。

输入格式
输入有两个整数，代表两个直角边的长度。

输出格式
输出你求得的结果，保留 3 位小数。

样例
input
3 4
output
5.000
*/
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%.3lf",sqrt(a * a + b * b));
    return 0;
}
