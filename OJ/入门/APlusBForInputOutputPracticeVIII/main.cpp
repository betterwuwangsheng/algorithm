#include <iostream>
#include <cstdio>
using namespace std;

/**
问题描述
您的任务是计算一些整数的总和。


输入值
输入的第一行包含一个整数N，然后是N行。每行以整数M开头，然后M整数在同一行中跟随。


输出量
对于每组输入整数，应在一行中输出其总和，并且必须注意，输出之间存在空白行。


样本输入
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3


样本输出
10

15

6

*/
int main()
{
    int N,M,sum,num;

    //接收 N
    scanf("%d",&N);

    while(N--){
        scanf("%d",&M); //接收 M

        sum = 0; //清零

        for(int i = 0; i < M; i++){  //求和
            scanf("%d",&num);
            sum += num;
        }

        printf("%d\n",sum);

        if(N){ //N = 0 不输出换行 => 边界条件
            printf("\n");
        }
    }
    return 0;
}
