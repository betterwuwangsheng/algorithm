#include <bits/stdc++.h>

/**
题目描述
出题是一件痛苦的事情！

相同的题目看多了也会有审美疲劳，于是我舍弃了大家所熟悉的 A+B Problem，改用 A-B 了哈哈！

好吧，题目是这样的：给出一串数以及一个数字 CC，要求计算出所有 A - B = CA−B=C 的数对的个数（不同位置的数字一样的数对算不同的数对）。

输入格式
输入共两行。

第一行，两个整数 N, CN,C。

第二行，NN 个整数，作为要求处理的那串数。

输出格式
一行，表示该串数中包含的满足 A - B = CA−B=C 的数对的个数。

输入输出样例
输入 #1复制
4 1
1 1 2 3
输出 #1复制
3
说明/提示
对于 75\%75% 的数据，1 \leq N \leq 20001≤N≤2000。

对于 100\%100% 的数据，1 \leq N \leq 2 \times 10^51≤N≤2×10
5
 。

保证所有输入数据都在 3232 位带符号整数范围内。

2017/4/29 新添数据两组
*/
using namespace std;

typedef long long ll;
const int MX = 2e5 + 10;
//建立数字出现次数的映射
//map<num, times>
map<ll, ll> m;
ll ans = 0;
int N, C;
ll a[MX];

int main() {
    scanf ("%d %d", &N, &C);
    for(int i = 1; i <= N; i++) {
        scanf("%lld", &a[i]);

        //通过映射
        m[a[i]]++;

          //A - C = B
          a[i] = a[i] - C;
    }

    for(int i = 1; i <= N; i++) {
            ans += m[a[i]];
    }
    cout << ans << endl;
    return 0;
}
