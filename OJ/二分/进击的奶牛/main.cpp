#include <bits/stdc++.h>

using namespace std;

/**
题目描述
Farmer John建造了一个有N(2<=N<=100,000)个隔间的牛棚，这些隔间分布在一条直线上，坐标是x1,...,xN (0<=xi<=1,000,000,000)。

他的C(2<=C<=N)头牛不满于隔间的位置分布，它们为牛棚里其他的牛的存在而愤怒。为了防止牛之间的互相打斗，Farmer John想把这些牛安置在指定的隔间，所有牛中相邻两头的最近距离越大越好。那么，这个最大的最近距离是多少呢？

输入格式
第1行：两个用空格隔开的数字N和C。

第2~N+1行：每行一个整数，表示每个隔间的坐标。

输出格式
输出只有一行，即相邻两头牛最大的最近距离。

输入输出样例
输入 #1复制
5 3
1
2
8
4
9

输出 #1复制
3
*/

const int MX = 1e5 + 1;
int pos[MX];

//使用二分发检验当前距离是否可行
bool check(int n, int c, int d) {
    //n 隔间数量
    //c 牛的数量
    //d 最小距离
    //贪心 -> 总是选择距离上一头牛最近的隔间，但 距离 >= d

    //暂存上一头牛所在牛棚的位置
    int temp_pos = n;
    c--;

    while(c--) {

        //查找最后一个隔间使其距离上一个隔间的距离 >= d
        //下一个隔间所选择的位置
        int next_pos = -1;

        int l = 1, r = temp_pos - 1;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(pos[temp_pos] - pos[mid] >= d) {

                next_pos = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(next_pos == -1) {
            return false;
        } else {
            temp_pos = next_pos;
        }
    }
    return true;
}
int main() {

    //N (2<=N<=100,000) 个隔间
    //C (2<=C<=N) 头牛
    int N, C;
    scanf("%d%d", &N, &C);

    //从 1 开始存储更加方便
    for(int i = 1; i <= N; i++) {
        scanf("%d", &pos[i]);
    }

    //排序，从 1 开始
    sort(pos + 1, pos + 1 + N);

    int l, r, mid;
    l = 0;
    r = pos[N];

    int ans = 0;

    //二分处理s
    while(l <= r) {

        //当前假设最大距离
        mid = l + (r - l) / 2;
        if(check(N, C, mid)) {
            ans = mid;

            //求最小距离的最大值 -> 可能在右边
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}
