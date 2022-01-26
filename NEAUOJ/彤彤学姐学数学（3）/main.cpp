#include <iostream>

using namespace std;

#define MOD 1000000007
typedef long long LL;

int T, n, a, b, sum1, sum2, sum3;
int main() {
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &n);

        sum1 = 0, sum2 = 0, sum3 = 0;
        for (int i = 0; i < n; ++i) {
            scanf("%d %d", &a, &b);
            sum1 = (sum1 + (LL)a * a % MOD) % MOD;
            sum2 = (sum2 + (LL)b * b % MOD) % MOD;
            sum3 = (sum3 + (LL)a * b % MOD) % MOD;
        }

        if ((LL)sum1 * sum2 % MOD == (LL)sum3 * sum3 % MOD)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
// int main() {
//     scanf("%d", &T);

//     while (T--) {
//         scanf("%d", &n);
//         scanf("%d %d", &aa, &bb);

//         int flag = 1;
//         for (int i = 2; i <= n; ++i) {
//             scanf("%d %d", &a, &b);
//             if ((long long)a * bb != (long long)aa * b)
//                 flag = 0;
//         }
//         if (flag)
//             puts("YES");
//         else
//             puts("NO");
//     }
//     return 0;
// }