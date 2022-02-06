#include <algorithm>
#include <iostream>

using namespace std;

int x, n;
int main() {
    scanf("%d %d", &n, &x);

    // 通过库函数获取最值
    int mx = max(n, x);
    printf("%d\n", mx);

    // 获取最小值
    int mn = min(n, x);
    printf("%d\n", mn);

    // 交换两个变量的值
    swap(n, x);
    printf("%d %d\n", n, x);

    // 绝对值函数
    int abs_n = abs(n);
    printf("%d", abs_n);

    // 查找
    // lower_bound(first, last, value)
    // upper_bound(first, last, value)
    return 0;
}