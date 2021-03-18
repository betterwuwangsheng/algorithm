#include <iostream>
#include <cstdio>


using namespace std;

/**
问题描述
许多同学对我说，A + B是必须的。
如果您无法解决这个问题，您可以邀请我一起吃饭。^ _ ^


输入值
输入内容可能包含多个测试用例。每个案例在一行中包含A和B。
A，B是十六进制数。
输入以EOF终止。


输出量
在一行中以十进制数字输出A + B。


样本输入
1 9
AB
b


样本输出
10
21
*/
int main()
{
    int a,b;
    while(scanf("%x %x", &a, &b) != EOF){
        //if(a >= 0 && a <= 9 && b >= 0 && b <= 9){
            printf("%d\n", a + b);
        //}
    }
    return 0;
}
