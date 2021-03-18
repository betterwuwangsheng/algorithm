#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/**
Problem Description
春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的：
“水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。
现在要求输出所有在m和n范围内的水仙花数。


Input
输入数据有多组，每组占一行，包括两个整数m和n（100<=m<=n<=999）。


Output
对于每个测试实例，要求输出所有在给定范围内的水仙花数，就是说，输出的水仙花数必须大于等于m,并且小于等于n，如果有多个，则要求从小到大排列在一行内输出，之间用一个空格隔开;
如果给定的范围内不存在水仙花数，则输出no;
每个测试实例的输出占一行。


Sample Input
100 120
300 380


Sample Output
no
370 371
*/

//是否为水仙花数
bool isDaffodil(int num) {
    int sum = 0;

    //获取每一位数字
    //当 i > 0 时，步长为 / 10
    for(int i = num; i > 0; i /= 10) {

        //取余获得每一位上的数字
        int a = i % 10;

        //求和
        sum += a * a * a;
    }
    return sum == num;
}

int main() {
    int m,n,cnt;
    while(scanf("%d %d", &m, &n) != EOF) {

        //边界条件判断 -> 交换
        if(m >n) {
            int temp = n;
            n = m;
            m = n;
        }

        //计数器置零
        cnt =0;

        //某一范围内的水仙花数
        for(int i = m; i <= n; i++ ) {

            //判断是否为水仙花数
            if(isDaffodil(i)) {

                //是 数量增加
                cnt++;

                //当数量不为 1

                if(cnt != 1)

                    //输出空格
                    printf(" ");

                //输出水仙花数 （若水仙花数量只有一个则直接输出）
                printf("%d",i);
            }
        }

        //数量为 0
        if(cnt == 0)
            printf("no");
        printf("\n");
    }
    return 0;
}
