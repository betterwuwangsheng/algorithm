#include <iostream>
#include <cstdio>

using namespace std;
/**
2913. A + B（I）
单点时限： 2.0秒

内存限制： 256 MB

您的任务是计算a + b。

太容易了？！当然！我专门为ACM初学者设计了这个问题。

您一定已经发现某些问题与此标题具有相同的标题，是的，所有这些问题都是出于相同的目的而设计的。

输入格式
输入将由一系列由空格隔开的整数对a和b组成，每行一对整数。

输出格式
对于每对输入整数a和b，您应该在一行中输出a和b的总和，并且在输入中每行输出一行。

样例
输入值
1 5
10 20
输出量
6
30

*/
int main()
{
    int a, b;

    //循环读入数据
    while(scanf("%d %d",&a, &b) != EOF) //读到文件结束 EOF
        printf("%d\n",a + b);
    return 0;
}
