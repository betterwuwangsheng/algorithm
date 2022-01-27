#include <cmath>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    // 判断大小
    if (a < b) {
        // 交换
        swap(a, b);
    }

    // 辗转相除法
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int T;
    scanf("%d", &T);

    int a, b;
    while (T--) {
        scanf("%d %d", &a, &b);

        // 获取最大公因数
        int mx = gcd(a, b);

        // 最大公因数为 1
        if (mx == 1) {
            printf("0rz\n");
            continue;
        }

        // 再次寻找最大公因数
        int i;
        for (i = mx - 1; i >= 1; --i) {
            if (a % i == 0 && b % i == 0)
                break;
        }
        printf("%d\n", i);
    }
    return 0;
}