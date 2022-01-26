#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);

    int n, m;
    while (T--) {
        scanf("%d %d", &m, &n);
        int remain = m, cnt = 0;
        int num;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &num);
            if (remain >= num) {
                remain -= num;
                cnt++;
            } else {
                continue;
            }
        }
        printf("%d %d\n", cnt, remain);
    }
    return 0;
}