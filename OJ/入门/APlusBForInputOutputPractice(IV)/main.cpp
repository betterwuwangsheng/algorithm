#include <iostream>
#include <cstdio>
using namespace std;

/**
问题描述
您的任务是计算一些整数的总和。


输入值
输入包含多个测试用例。每个测试用例包含一个整数N，然后在同一行中跟随N个整数。以0开头的测试用例将终止输入，并且该测试用例将不被处理。


输出量
对于每组输入整数，应在一行中输出其总和，并且在输入中每行输出一行。


样本输入
4 1 2 3 4
5 1 2 3 4 5
0


样本输出
10
15

*/
int main()
{
    int N,num,sum;
    while(scanf("%d",&N) != EOF){
        sum = 0; //清零
        if(!N)
            break;
        else{
            for(int i = 0; i < N; i++){
                scanf("%d",&num);
                sum += num;
            }
        printf("%d\n",sum);
        }
    }

   return 0;
}
