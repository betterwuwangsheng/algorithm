#include <iostream>

using namespace std;

int T, n, t, m, sum;
int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);

        sum = 0;
        for (int i = 1; i <= n; ++i) {
            scanf("%d %d", &t, &m);
            // 当这道题没有通过时，所用时间为 0。
            if (t == 0)
                continue;

            // 计算时长
            sum += t + (m - 1) * 20;
        }
        printf("%d\n", sum);
    }
    return 0;
}