#include <iostream>

using namespace std;

int n;
int main() {
    scanf("%d", &n);
    int a[n][n];

    // 初始化
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == 0 || i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    // 构造杨辉三角
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < i; ++j) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    // 输出
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}