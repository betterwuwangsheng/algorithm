#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5e5 + 10;

//pos[]数组来依次表示各个石头与起点间的距离
int pos[MAXN];

//l 量石头间的距离
//n 石头数量
//m 每个石头距离起点的距离
int l, n, m;

/**
    贪心：如果不跳到第一个符合条件的点上，那么整个队列的稀疏度就会提高
    最终需要删除的石头也会更多。
    要取最优状态，所以要保证跳过的石头数最少。
    如果某个石头到终点的距离小于x，那它不能被统计到——所以得删去后面这些无法跳到的石头。
*/
bool check(int mid) {
    int cnt = 0;

    //上一块石头距起点的位置
    int last = 0;
    for(int i = 0; i < n; i++) {

        //由于我们要寻找的是最小距离的最大值
        //所以两块石头的距离不可以小于当前 mid 值
        if(pos[i] - last < mid)

            //若小于 mid 把这块石头移走
            cnt++;
        else

            //更新 last 的值
            last = pos[i];
    }

    //组委会至多从起点和终点之间移走 MM 块岩石
    //（不能移走起点和终点的岩石）
    if(cnt > m)
        return false;
    else
        return true;
}
int main() {
    scanf("%d%d%d", &l, &n, &m);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &pos[i]);
    }

    //终点与起点的距离
    pos[n + 1] = l;

    //对距离进行排序
    sort(pos, pos + n);

    //对距离进行二分
    //假定当前 mid 距离合法 ——> 进行判断
    int left = 0, right = l, mid;
    int res = -1;
    while(left <= right) {
        mid = (left+ right) / 2;

        if(check(mid)) {
            res = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("%d\n", res);
    return 0;
}
