#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);

    int l, r, d;
    while (T--) {
        scanf("%d %d %d", &l, &r, &d);
        int num;
        bool flag = true;
        for (int i = l; i < r; i += d) {
            scanf("%d", &num);
            if (i != num) {
                flag = false;
                // 会导致后面的数据无法读入
                // break;
            }
        }
        if (flag)
            printf("hao ye!\n");
        else
            printf("tai cai le.\n");
    }
    return 0;
}