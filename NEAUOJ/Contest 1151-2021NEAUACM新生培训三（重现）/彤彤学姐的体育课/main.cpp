#include <iostream>

using namespace std;

int n, m, s, t;

void solve(int n, int m, int s, int t) {
    // 计算当前报数的人数 -> 以开始报数的人数为 0
    int cnt = 0;

    // 这一轮要报的数 -> 第一个一定是 1
    int num = 1;

    // 指定报的数字是增加还是减少
    int inc_dec = 1;

    // 实现循环 -> 若还未报数到 t 位置 -> 循环
    while (s != t) {
        // 输出要报的数字
        printf("%d ", num);

        // 报出 num 的人数增加 1
        cnt++;

        // 报到相应的人数
        if (cnt == num) {
            // 要报的数字增加 1
            num += inc_dec;

            // 1 2 3 2 1
            // 当前要报的数字 > 最大要报的数
            if (num > m) {
                //  1 2 3 2 1
                // 递减要报的数
                num = m - 1;

                // 实现递减
                inc_dec = -1;
            }
            // 数字递减之后又循环 -> 1 2 3 2 1 2 3 2 1
            if (num < 1) {
                num = 2;
                inc_dec = 1;
            }
            // 要报的数清零
            cnt = 0;
        }
        s += 1;
        // 当所有人都报完该轮，则从头开始报数
        if (s == n + 1)
            // 从头开始
            s = 1;
    }
    printf("%d\n", num);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &n, &m, &s, &t);

        solve(n, m, s, t);
    }
    return 0;
}