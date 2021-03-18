#include <iostream>
#include <cstdio>
using namespace std;

/**
问题描述
您的任务是计算一些整数的总和。


输入值
输入包含多个测试用例，一个案例包含一行。每种情况均以整数N开头，然后在同一行中跟随N个整数。


输出量
对于每个测试用例，应在一行中输出N个整数的总和，并在输入中为每一行输出一行输出。


样本输入
4 1 2 3 4
5 1 2 3 4 5


样本输出
10
15
*/
int main()
{
    int N,num,sum;

    while(scanf("%d",&N) != EOF){
        sum = 0;
        //for(int i = 0; i < N; i++){
        while(N--){
            scanf("%d",&num);
            sum += num;
       }
        printf("%d\n",sum);
    }
    return 0;
}
