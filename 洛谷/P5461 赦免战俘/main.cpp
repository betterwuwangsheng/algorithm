// #include <string.h>
// #include <cmath>
// #include <iostream>

// using namespace std;

// const int MAXN = 1034;
// int mp[MAXN][MAXN];

// void solve(int x, int y, int l) {
//     int t = l >> 1;
//     if (l == 1) {
//         return;
//     }

//     for (int i = x; i <= x + t - 1; ++i) {
//         for (int j = y; j <= y + t - 1; ++j) {
//             mp[i][j] = 1;
//         }
//     }

//     // 三个小方块的递归
//     solve(x + t, y, t);
//     solve(x, y + t, t);
//     solve(x + t, y + t, t);
// }

// int n;
// int main() {
//     scanf("%d", &n);

//     memset(mp, 0, sizeof(mp));
//     int len = pow(2, n);

//     solve(1, 1, len);

//     for (int i = 1; i <= len; ++i) {
//         for (int j = 1; j <= len; ++j) {
//             if (mp[i][j] == 0)
//                 printf("1 ");
//             else
//                 printf("0 ");
//         }
//         puts("");
//     }
//     return 0;
// }

#include <string.h>
#include <cmath>
#include <iostream>

int a[1034][1034];

// 找规律
int main() {
    int n;
    scanf("%d", &n);

    int len = pow(2, n);

    memset(a, 0, sizeof(a));

    // 构造
    for (int i = 1; i <= len; ++i) {
        for (int j = 1; j <= len; ++j) {
            // 最后一列一定为 1
            a[i][len] = 1;

            // 最后一行一定为 1
            int t = len - i + 1;
            if (j == t)
                a[i][j] = 1;
        }
    }

    for (int i = 3; i <= len; ++i) {
        for (int j = len - i + 2; j < len; ++j) {
            a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
        }
    }

    // 输出
    for (int i = 1; i <= len; ++i) {
        for (int j = 1; j <= len; ++j) {
            // 和不是偶数 -> 输出 1
            if (a[i][j] % 2)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}