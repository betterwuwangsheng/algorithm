#include <iostream>

using namespace std;

int t, n;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);

        // 少于四个 -> 补齐四个
        if (n < 4) {  // 补齐
            printf("%d\n", 4 - n);
        } else if (n & 1) {  // 奇数个 -> 补充为偶数
            printf("1\n");
        } else {  // 偶数不补充
            printf("0\n");
        }
    }
    return 0;
}