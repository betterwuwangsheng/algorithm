#include <iostream>
#include <cstdio>

using namespace std;

/**
A + B（II）
单点时限： 2.0秒

内存限制： 256 MB

您的任务是计算a + b。

输入格式
输入的第一行包含一个整数N，然后是N行。每行由一对整数a和b组成，每对之间用空格隔开，每行一对整数。

输出格式
对于每对输入整数a和b，您应该在一行中输出a和b的总和，并且在输入中每行输出一行。

样例
输入值
2
1 5
10 20
输出量
6
30
*/
int main()
{
    int n, a, b; //n 组数据

    scanf("%d",&n);//读入数据的组数

    while(n--) //读取 n组数据
    {
        scanf("%d %d",&a, &b);
        printf("%d\n",a + b);
    }
    return 0;
}
