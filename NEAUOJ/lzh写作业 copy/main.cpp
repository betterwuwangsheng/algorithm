#include <iostream>

using namespace std;

typedef long long LL;

// remain 上一天剩余的作业
int n, T, cnt;
LL a, b, remain;
int main() {
    scanf("%d", &T);
    while (T--) {
        remain = 0, cnt = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%lld %lld", &a, &b);

            // 实际要完成的作业数量
            a = a + remain;

            // 作业不够写
            if (a < b)
                cnt++;

            // 有剩余
            if (a > b)
                remain = a - b;
            else
                remain = 0;
        }
        printf("%d\n", cnt);
    }
    return 0;
}