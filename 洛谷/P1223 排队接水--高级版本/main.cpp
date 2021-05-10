#include <bits/stdc++.h>

using namespace std;

/**
题目描述
有 nn 个人在一个水龙头前排队接水，假如每个人接水的时间为 T_iT
i
​
 ，请编程找出这 nn 个人排队的一种顺序，使得 nn 个人的平均等待时间最小。

输入格式
第一行为一个整数 nn。

第二行 nn 个整数，第 ii 个整数 T_iT
i
​
  表示第 ii 个人的等待时间 T_iT
i
​
 。

输出格式
输出文件有两行，第一行为一种平均时间最短的排队顺序；第二行为这种排列方案下的平均等待时间（输出结果精确到小数点后两位）。

输入输出样例
输入 #1复制
10
56 12 1 99 1000 234 33 55 99 812
输出 #1复制
3 2 7 8 1 4 9 6 10 5
291.90
说明/提示
n \leq 1000,t_i \leq 10^6n≤1000,t
i
​
 ≤10
6
 ，不保证 t_it
i
​
  不重复。

当 t_it
i
​
  重复时，按照输入顺序即可（sort 是可以的）
*/

//等待时间越长的排在越后面
const int MX = 1e6 + 10;
long long t = 0;
//结构体排序 -> 每一个对象有多个数据
struct person {
    int time;
    int seq;
} p[MX];

//定义“小于”运算符
bool cmp(person a, person b) {
    return a.time < b.time;
}
int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &p[i].time);

        //存储序号
        p[i].seq = i;
    }
    sort(p + 1, p + 1 + n, cmp);
    for(int i = 1; i <= n; i++) {
        printf("%d ", p[i].seq);
        t += p[i].time * (n - i);
    }
    printf("\n%.2lf\n", 1.0 * t / n);
    return 0;
}
