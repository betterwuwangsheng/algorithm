#include <iostream>

using namespace std;

typedef long long LL;

int main() {
    int T;
    scanf("%d", &T);

    LL num;
    while (T--) {
        scanf("%lld", num);
        int cnt = 0;

        // 50 的倍数 -> ...00 ...50
        // 个位数字不为 0
        while (num % 10 != 0) {
            num /= 10;

            // 删除次数增加
            ++cnt;
        }
        LL k = num;
    }
    return 0;
}