#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    // 对于每一所学校，每站参加的队伍数最高与最低之差不能超过 1。
    // C_n_(n % 4)
    // 平均分配之后剩余的安排在其他 n 个队伍
    int n;
    while (T--) {
        scanf("%d", &n);

        // 4 的倍数 -> 只有一种情况 -> 均分
        if (n % 4 == 0)
            puts("1");
        else if (n % 4 == 1 || n % 4 == 3)
            puts("4");
        else if (n % 4 == 2)
            puts("6");
    }
    return 0;
}