#include <bits/stdc++.h>

using namespace std;
const int MX = 1e5 + 1;
int pos[MX];

//n 隔间数量
//c 牛的数量
//d 最小距离
//使用二分法检验当前距离是否可行
bool check(int n, int c, int d) {

    //贪心 -> 总是选择距离上一头牛最近的隔间
    //暂存上一头牛所在牛棚的位置
    int temp_pos = n;
    c--;

    while(c--) {
        //查找最后一个隔间使其距离上一个隔间的距离 >= d

        //下一个隔间所选择的位置
        int next_pos = -1;

        int l = 1, r = temp_pos - 1;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(pos[temp_pos] - pos[mid] >= d) {

                next_pos = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(next_pos == -1) {
            return false;
        } else {
            temp_pos = next_pos;
        }
    }
    return true;
}

int main() {

    //N (2<=N<=100,000) 个隔间
    //C (2<=C<=N) 头牛
    int N, C;
    scanf("%d%d", &N, &C);

    //从 1 开始存储更加方便
    //牛舍的位置
    for(int i = 1; i <= N; i++) {
        scanf("%d", &pos[i]);
    }

    //排序，从 1 开始
    sort(pos + 1, pos + 1 + N);

    int l, r, mid;
    l = 0;
    r = pos[N];

    int res = 0;

    //二分处理s
    while(l <= r) {

        //当前假设最大距离
        mid = l + (r - l) / 2;

        if(check(N, C, mid)) {

            //可行
            res = mid;

            //求最小距离的最大值 -> 可能在右边
            l = mid + 1;
        } else {

            //不可行
            r = mid - 1;
        }
    }
    printf("%d\n", res);
    return 0;
}
