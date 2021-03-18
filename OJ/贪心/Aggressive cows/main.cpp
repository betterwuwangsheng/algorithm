#include <bits/stdc++.h>
using namespace std;

/**
描述

农夫约翰建造了一个新的长谷仓，其中有N个（2 <= N <= 100,000）摊位。档位沿直线位于位置x1，...，xN（0 <= xi <= 1,000,000,000）。
他的C（2 <= C <= N）头母牛不喜欢这种谷仓布局，一旦放到摊子里就会变得互相攻击。为了防止母牛相互伤害，FJ希望将母牛分配到摊位，以使它们之间的最小距离尽可能大。最大最小距离是多少？

输入
*第1行：两个以空格分隔的整数：N和C
*第2..N + 1行：第i + 1行包含整数停顿位置xi
输出
*第1行：一个整数：最大最小距离
样本输入

5 3
1
2
8
4
9
样本输出

3

暗示
输出详细信息：
FJ可以将他的3头母牛放到位置1、4和8的摊位上，最小距离为3。
建议输入大量数据，scanf。
*/

//最大值的最小值问题 -> 判定性问题
//最小值的最小大值问题 -> 判定性问题
//二分策略
const int MAXN = 1e5 + 10;
int a[MAXN];

//n 个房间
//m 头牛
//d 最小距离
bool check(int n, int m, int d) {

    //当前牛放置的位置
    int current = a[0];

    //放了几头牛
    int num = 1;
    for(int i = 1; i < n; i++) {

        //房间间隔 > d
        if(a[i] - current >= d) {

            //放的牛的数量增加
            num++;

            //更新当前位置
            current = a[i];
        }

        //放置的牛 >= 牛的总数
        if(num >= m)
            return true;
    }
    return false;
}

int main() {
    int n, c;

    //多组样例输入
    while(scanf("%d%d", &n, &c) != EOF) {
        for(int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }

        //排序
        sort(a, a + n);

        //二分
        //判断间距是否可行
        //对间距采取二分策略
        int left = 1;
        int right = a[n - 1] - a[0];

        while(left <= right) {
            int mid = left + (right - left) / 2;

            //最小距离可行
            if(check(n, c, mid)) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        //最小距离的最大值
        printf("%d\n", right);
    }
    return 0;
}
