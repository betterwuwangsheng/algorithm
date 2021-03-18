#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
“今年暑假不AC？”
“是的。”
“那你干什么呢？”
“看世界杯呀，笨蛋！”
“@#$%^&*%...”

确实如此，世界杯来了，球迷的节日也来了，估计很多ACMer也会抛开电脑，奔向电视了。
作为球迷，一定想看尽量多的完整的比赛，当然，作为新时代的好青年，你一定还会看一些其它的节目，比如新闻联播（永远不要忘记关心国家大事）、非常6+7、超级女生，以及王小丫的《开心辞典》等等，假设你已经知道了所有你喜欢看的电视节目的转播时间表，你会合理安排吗？（目标是能看尽量多的完整节目）


Input
输入数据包含多个测试实例，每个测试实例的第一行只有一个整数n(n<=100)，表示你喜欢看的节目的总数，然后是n行数据，每行包括两个数据Ti_s,Ti_e (1<=i<=n)，分别表示第i个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。n=0表示输入结束，不做处理。


Output
对于每个测试实例，输出能完整看到的电视节目的个数，每个测试实例的输出占一行。


Sample Input
12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
0


Sample Output
5


    区间贪心
    多个不同的区间，并且区间有可能有重叠时
    如何选择才能从众多区间中选区最多的两两不相交的区间
*/

const int MAXN =  100 + 10;

//节目开始和结束时间
//区间
struct Program {
    int startTime;
    int endTime;
};

Program p[MAXN];

//按照结束时间升序排序
bool cmp(Program x, Program y) {
    return x.endTime < y.endTime;
}

int main() {

    //多组样例输入
    int n;
    while(scanf("%d", &n) != EOF) {

        // 0 不处理
        if(n == 0)
            break;

        // n 行数据
        //读入开始和结束时间
        for(int i = 0; i < n; ++i) {
            scanf("%d%d", &p[i].startTime, &p[i].endTime);
        }

        //排序 -> 按照结束时间升序排序
        sort(p, p + n, cmp);

        //用于记录当前时间是否小于节目的开始时间
        int currentTime = 0;

        //一共可以观看的节目数量
        int cnt = 0;

        //遍历
        //贪心策略 -> 选择结束时间最早的
        //剩下来的时间越长 -> 选择其他节目的机会越大
        for(int i = 0; i < n; ++i) {

            //当前时间 <= 节目开始时间 -> 观看节目
            if(currentTime <= p[i].startTime) {

                //节目看完之后更新当前时间
                currentTime = p[i].endTime;

                //能观看的尽量多的完整节目
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
