#include <bits/stdc++.h>

using namespace std;

// 小三角形 -> 大三角形
//贪心策略
//每次将最小的一条边改成能达到的最大值
//（由于是整数，那么即另外两边的和 -1）
//如果能达到的最大值已经大于x值了，那么就取x；
int x, y, cnt = 0;
int a[3];
int main() {

    scanf("%d%d", &x, &y);

    //小三角形
    for(int i = 0; i < 3; ++i){
        a[i] = y;
    }

    //三边中有一边没有达到x就继续循环
    while(a[0] < x || a[1] < x || a[2] < x) {

        //三边排序
        sort(a, a + 3);

        //默认 a[0] -> x
        //能达到的最大值
        int t = a[1] + a[2] - 1;

        //与 x 比，取小的(不能超过 x)
        a[0] = min(x, t);

        //次数增加
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
