#include <bits/stdc++.h>

/**
题目背景
快 noip 了，yyy 很紧张！

题目描述
现在各大 oj 上有 nn 个比赛，每个比赛的开始、结束的时间点是知道的。

yyy 认为，参加越多的比赛，noip 就能考的越好（假的）。

所以，他想知道他最多能参加几个比赛。

由于 yyy 是蒟蒻，如果要参加一个比赛必须善始善终，而且不能同时参加 22 个及以上的比赛。

输入格式
第一行是一个整数 nn ，接下来 nn 行每行是 22 个整数 a_{i},b_{i}a
i
​
 ,b
i
​
  ( a_{i}<b_{i}a
i
​
 <b
i
​
  )，表示比赛开始、结束的时间。

输出格式
一个整数最多参加的比赛数目。

输入输出样例
输入 #1复制
3
0 2
2 4
1 3
输出 #1复制
2
说明/提示
对于 20\%20% 的数据， n \le 10n≤10。

对于 50\%50% 的数据， n \le 10^3n≤10
3
 。

对于 70\%70% 的数据， n \le 10^{5}n≤10
5
 。

对于 100\%100% 的数据， 1\le n \le 10^{6}1≤n≤10
6
  ， 0 \le a_{i} < b_{i} \le 10^60≤a
i
​
 <b
i
​
 ≤10
6
 。
*/
using namespace std;
const int MX = 1e6 + 10;
struct contest {
    int start;
    int finish;
} c[MX];
int n, cnt = 0;
int current;
//根据结束时间进行排序 -> 升序
bool cmp(contest a, contest b) {
    return a.finish < b.finish;
}

int main() {
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d%d", &c[i].start, &c[i].finish);
    }

    sort(c + 1, c + 1 +n, cmp);

    for(int i = 1; i <= n; i++){

        //开始时间 >= 当前
        if(c[i].start >= current){

            //入场
            //修改当前时间为该场比赛的结束时间
            current = c[i].finish;

            //计数
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
