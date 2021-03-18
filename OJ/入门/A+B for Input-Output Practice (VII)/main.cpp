#include <iostream>
#include <cstdio>
using namespace std;
/**


问题描述
您的任务是计算a + b。


输入值
输入将由一系列由空格隔开的整数对a和b组成，每行一对整数。


输出量
对于每对输入整数a和b，您应该输出a和b的总和，然后输出空白行。


样本输入
1 5
10 20


样本输出
6

30

*/
int main()
{
    int a,b;
    while(scanf("%d %d", &a, &b) != EOF){
        printf("%d\n\n",a + b);
    }
    return 0;
}
