// #include <iostream>

// using namespace std;

// typedef long long LL;

// LL n;
// int main() {
//     // int: -2147483648 - 2147483647
//     scanf("%lld", &n);
//     printf("%lld\n", (n * n + n + 2) / 2);
//     return 0;
// }

#include <iostream>

using namespace std;

typedef long long LL;

LL n;
int main() {
    // int: -2147483648 - 2147483647
    // int * int -> 超出 int (可能) -> n 使用 LL
    scanf("%lld", &n);
    cout << n << endl;
    printf("%lld\n", (n * n + n + 2) / 2);
    return 0;
}