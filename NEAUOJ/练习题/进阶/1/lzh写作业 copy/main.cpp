// #include <iostream>

// using namespace std;

// typedef long long LL;

// // remain 上一天剩余的作业
// int n, T, cnt;
// LL a, b, remain;
// int main() {
//     scanf("%d", &T);
//     while (T--) {
//         remain = 0, cnt = 0;
//         scanf("%d", &n);
//         for (int i = 0; i < n; ++i) {
//             scanf("%lld %lld", &a, &b);

//             // 实际要完成的作业数量
//             a = a + remain;

//             // 作业不够写
//             if (a < b)
//                 cnt++;

//             // 有剩余
//             if (a > b)
//                 remain = a - b;
//             else
//                 remain = 0;
//         }
//         printf("%d\n", cnt);
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

typedef long long LL;

int t, n;
LL a, b;

int main() {
    scanf("%d", &t);
    while (t--) {
        int cnt = 0;
        LL remain = 0;

        scanf("%d", &n);

        while (n--) {
            scanf("%lld %lld", &a, &b);

            // 实际要完成的作业数量
            // int + int 可能会超过 int
            a = a + remain;

            // 不够写
            if (a < b) {
                ++cnt;
            }
            if (a > b) {  // 够写 -> 有剩下
                remain = a - b;
            } else  // 没有剩下作业
            {
                remain = 0;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}