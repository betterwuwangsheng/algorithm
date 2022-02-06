#include <iostream>

using namespace std;

// 用数组存储每一位的值
int a[5] = {0};
int main() {
    for (int i = 0; i < 32; ++i) {
        int idx = 4;

        // 暂存 i
        int n = i;
        while (n) {
            // 使用数组将每一位的值存储到指定位置
            a[idx--] = n % 2;
            n /= 2;
        }

        for (int j = 0; j < 5; ++j) {
            printf("%d", a[j]);
        }
        puts("");
    }
    return 0;
}
