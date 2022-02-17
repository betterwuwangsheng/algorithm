#include <iostream>

using namespace std;

int n, m, xs, ys, dx, dy, xt, yt;
int solve(int n, int m, int xs, int ys, int dx, int dy, int xt, int yt) {
    // 位于起点
    if (xt == xs && ys == yt)
        return 0;

    bool flag = 0;
    for (int i = 0; i < n * m; ++i) {
        // 一次移动
        xs = (xs + dx) % n;
        ys = (ys + dy) % m;

        // 能找到
        if (xs == xt && ys == yt) {
            // 输出步数
            flag = 1;
            return i + 1;
        }
    }
    if (!flag)
        return -1;
    return 0;
}
int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d %d %d %d %d", &n, &m, &xs, &ys, &dx, &dy, &xt, &yt);

        int res = solve(n, m, xs, ys, dx, dy, xt, yt);
        printf("%d\n", res);
    }

    return 0;
}