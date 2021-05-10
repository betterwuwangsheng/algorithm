#include <iostream>
#include <cstdio>
using namespace std;

/**
单点时限: 2.0 sec

内存限制: 256 MB

对于一个非负整数 , 四元一次方程：


的非负整数解是不唯一的。

编程计算不同解的个数。

例如： 时有 1 个解 ;  时有 2 个解  和

输入格式
第 1 行：整数  () 为问题数

第 2 ∽  行：每一个问题中的 。

输出格式
对于每个问题，在一行中输出解的个数。

样例
input
3
0
10
1000
output
1
23
7049112

*/
int main()
{
    int T;  //获取问题数
    scanf("%d",&T);

    while(T--){

        //获取  n
        int n,cnt=0; // cnt 用于计数
        scanf("%d",&n);

        //暴力求解 => 优化进行实践复杂度优化
        for(int w = 0; w <= n / 4; w++) //w 最大 为 n / 4
            for(int x = 0; x <= n / 3; x++) //x 最大为 n / 3
                for(int y = 0; y <= n / 2; y++) //y 最大为 n / 2
                {
                    if(4 * w + 3 * x + 2 * y <= n) //z = n-4w-3x-2y >= 0 => 4w+3x+2y <= 0
                        cnt++;
                }
            printf("%d\n",cnt);
    }
    return 0;
}
