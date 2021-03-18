#include <bits/stdc++.h>

/**
题目描述
由于乳制品产业利润很低，所以降低原材料（牛奶）价格就变得十分重要。帮助 Marry 乳业找到最优的牛奶采购方案。

Marry 乳业从一些奶农手中采购牛奶，并且每一位奶农为乳制品加工企业提供的价格是不同的。此外，就像每头奶牛每天只能挤出固定数量的奶，每位奶农每天能提供的牛奶数量是一定的。每天 Marry 乳业可以从奶农手中采购到小于或者等于奶农最大产量的整数数量的牛奶。

给出 Marry 乳业每天对牛奶的需求量，还有每位奶农提供的牛奶单价和产量。计算采购足够数量的牛奶所需的最小花费。

注：每天所有奶农的总产量大于 Marry 乳业的需求量。

输入格式
第一行二个整数 n,mn,m，表示需要牛奶的总量，和提供牛奶的农民个数。

接下来 mm 行，每行两个整数 p_i,a_ip
i
​
 ,a
i
​
 ，表示第 ii 个农民牛奶的单价，和农民 ii 一天最多能卖出的牛奶量。

输出格式
单独的一行包含单独的一个整数，表示 Marry 的牛奶制造公司拿到所需的牛奶所要的最小费用。

输入输出样例
输入 #1复制
100 5
5 20
9 40
3 10
8 80
6 30
输出 #1复制
630
说明/提示
【数据范围】
对于 100\%100% 的数据：
0 \le n,a_i \le 2 \times 10^60≤n,a
i
​
 ≤2×10
6
 ，0\le m \le 50000≤m≤5000，0 \le p_i \le 10000≤p
i
​
 ≤1000

题目翻译来自 NOCOW。

USACO Training Section 1.3
*/
using namespace std;

//使用结构体进行排序更加简单
struct milk {
    int p;
    int a;
} mine[5005];

bool cmp(milk a, milk b) {

    //比较价格
    return a.p < b.p;
}
int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    for(int i = 1; i <= m; i++) {
        scanf("%d%d", &mine[i].p, &mine[i].a);
    }

    //对价格数组排序
    sort(mine + 1, mine + 1 + m, cmp);

    int sum = 0;
    for(int i = 1; i <= m; i++) {

        //未超出预算
        if(n >= mine[i].a) {

            //总价增加
            sum += mine[i].p * mine[i].a;

            //总量减少
            n = n - mine[i].a;
        } else {

            //超出预算
            sum += n * mine[i].p;
            break;
        }
    }

    //刚好全买
    printf("%d\n", sum);
    return 0;
}
