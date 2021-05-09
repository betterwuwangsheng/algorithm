#include <bits/stdc++.h>

using namespace std;

/**
单点时限: 2.0 sec

内存限制: 256 MB

给你  个数，要求你把这  个数按照绝对值从小到大排序。

多 ，处理直到文件结束。

输入格式
输入一个数 ，接下来一行是  个整数 。

输出格式
排序后按照绝对值从小到大输出  个数，输出一行，每两个数字之间有个空格，最后一个数字后面没空格。

样例
input
4
-3 -4 1 2
1
10
output
1 2 -3 -4
10

*/

int a[105];

bool cmp(int x,int y) {
    return abs(x) < abs(y);
}
int main() {
    int n,i;

    while(scanf("%d", &n) != EOF) {
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        sort(a, a + n, cmp);

        for(i = 0; i < n; i++) {
            printf("%d", a[i]);

            //根据情况进行输出
            if(i != n - 1) {

                //不是最后一个，输出则输出空格
                printf(" ");
            } else {
                //最后一个输出,输出换行
                printf("\n");
            }
        }
    }
    return 0;
}
