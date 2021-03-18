#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;

/**
单点时限: 2.0 sec

内存限制: 256 MB

华东师大的学生都有一个唯一的学生编号 (SIN). SIN 是一个整数 (0<= SIN <= 10^6-1), 一位老师觉得这个 SIN 的范围在他所教授的学生组中太大了。在每一个小组中，他想要找到一个最小的正整数 m, 使得在这个小组中所有的 SIN 除以 m 得到的余数是唯一的。

输入格式
在测试数据的第一行是一个正整数 N, 表示有 N 组测试数据。每一组测试数据的第一行是一个整数 G(1<=G<=300), 表示在这个小组中的学生数量。接下去的 G 行每一行包含一个 SIN. 在每一个小组中的 SIN 是不同的，虽然不一定是排序的。

输出格式
对于每一组测试数据，输出一行，包含最小的除数 m, 使得所有 SIN 除以 m 得到的余数是唯一的。

样例
input
2
1
124866
3
124866
111111
987651
output
1
8
*/
int main() {

    ///测试用例组数
    int N;
    scanf("%d", &N);

    while(N--) {

        ///学生数量
        int G;
        scanf("%d", &G);


        ///读入编号数据
        int ans = 1;
        int num[310];
        for(int i = 0; i < G; i++) {
            scanf("%d", &num[i]);

        }
        for(int i = 0; i < G; i++) {
            if(G == 1)
                cout << ans << endl;
            else
                ans = __gcd(num[i], num[i + 1]);
        }
    }
    return 0;
}
