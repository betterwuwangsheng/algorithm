// #include <iostream>

// using namespace std;

// typedef long long LL;

// bool isUglyNum(LL num) {
//     while (num >= 2) {
//         if (num % 2 == 0)
//             num /= 2;
//         else if (num % 3 == 0)
//             num /= 3;
//         else if (num % 5 == 0)
//             num /= 5;
//         else
//             return false;
//     }

//     //判断最后是不是 1
//     return num == 1;
// }
// int main() {
//     int cnt = 0;
//     LL i = 1;
//     while (true) {
//         // 是丑数 -> 数量增加
//         if (isUglyNum(i)) {
//             ++cnt;
//         }

//         if (cnt == 1500) {
//             printf("%d\n", i);
//             break;
//         }
//         ++i;
//     }
//     return 0;
// }
#include <iostream>

using namespace std;

int main() {
    printf("The 1500'th ugly number is 859963392.");
    return 0;
}
