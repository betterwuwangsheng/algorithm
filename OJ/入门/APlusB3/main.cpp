#include <iostream>
#include<cstdio>
using namespace std;

/**
A + B（III）
单点时限： 2.0秒

内存限制： 256 MB

您的任务是计算a + b。

输入格式
输入包含多个测试用例。每个测试用例包含一对整数a和b，每行一对。包含0 0的测试用例将终止输入，并且该测试用例将不被处理。

输出格式
对于每对输入整数a和b，您应该在一行中输出a和b的总和，并且在输入中每行输出一行。

样例
输入值
1 5
10 20
0 0
输出量
6
30
*/
int main()
{
    int a,  b;//接收数据
    while(scanf("%d %d",&a, &b) != EOF) //读取数据到文件末尾
    {
        if(a == 0 && b == 0) //读到 0 0
            break;//跳出
        printf("%d\n",a + b);
    }
    return 0;
}
