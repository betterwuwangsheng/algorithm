// #include <math.h>
// #include <iostream>

// using namespace std;

// typedef long long LL;

// int t, n;

// int main() {
//     scanf("%d", &t);
//     while (t--) {
//         LL sum = 0;
//         scanf("%d", &n);
//         for (int i = 1; i <= n; ++i) {
//             // 此题类似二进制
//             // 不同位数的二进制的数量之和
//             // 由 7 9 组成 -> 由 0 1 组成 更加直观
//             sum += pow(2, i);
//         }
//         printf("%lld\n", sum);
//     }
//     return 0;
// }
#include <math.h>
#include <iostream>

using namespace std;

typedef long long LL;

int t, n;

int main() {
    scanf("%d", &t);
    while (t--) {
        LL sum = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            // 此题类似二进制
            // 不同位数的二进制的数量之和
            // 由 7 9 组成 -> 由 0 1 组成 更加直观
            // sum += pow(2, i);
            // 更快的写法
            // 移位运算
            sum += (1LL << i);
        }
        printf("%lld\n", sum);
    }
    return 0;
}