#include <iostream>
#include <cstdio>
using namespace std;

/**


在线评委	在线练习	在线教学	网上比赛	练习作者
常见问题
手拉手
在线Acmers 论坛| 讨论统计图


问题档案库实时评审状态作家排名



     C / C ++ / Java的考试
ACM步骤
转到招聘
大赛LiveCast
ICPC中国@
最佳编码器测试版
VIP | STD竞赛
虚拟竞赛
    DIY | Web-DIY beta
最新竞赛
作者wwswwswws
邮件邮件0 （0）
控制面板控制面板
登出退出
输入输出练习的A + B（V）
时间限制：2000/1000 MS（Java /其他）内存限制：65536/32768 K（Java /其他）
总提交数量：130206接受提交数量：85699


问题描述
您的任务是计算一些整数的总和。


输入值
输入的第一行包含一个整数N，然后是N行。每行以整数M开头，然后M整数在同一行中跟随。


输出量
对于每组输入整数，应在一行中输出其总和，并且在输入中每行输出一行。


样本输入
2
4 1 2 3 4
5 1 2 3 4 5


样本输出
10
15


*/
int main()
{
    int N,M,num,sum;
    scanf("%d",&N);

    while(N--){
        scanf("%d",&M);
        sum = 0;
        for(int i = 0; i < M; i++){
            scanf("%d",&num);
            sum += num;
        }
        printf("%d\n",sum);
    }
    return 0;
}
