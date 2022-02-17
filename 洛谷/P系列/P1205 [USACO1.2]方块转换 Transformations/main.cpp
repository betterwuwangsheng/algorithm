#include <iostream>

using namespace std;

int n;
char a[20][20], b[20][20];

/**
 * @brief 顺时针旋转 90 度
 *        第一行变成最后一列    1 -> n => n + 1
 *        第二行变成倒数第二列  2 -> n -1 => n + 1
 *
 * @return a 顺时针旋转后和 b 相同返回 true;
 *           a 顺时针旋转后和 b 不同返回 false
 */
bool rotate_90() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != b[j][n - i + 1])
                return false;
        }
    }
    return true;
}

/**
 * @brief 顺时针旋转 180 度
 *        第一行变成最后一行 1 -> n => n + 1
 *        第二行变成倒数第二行 2 -> n -1 => n + 1
 *
 * 第一列
 * @return
 */
bool rotate_180() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != b[n - i + 1][n - j + 1])
                return false;
        }
    }
    return true;
}

bool rotate_270() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != b[n - j + 1][i])
                return false;
        }
    }
    return true;
}

bool reflect() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != b[i][n - j + 1])
                return false;
        }
    }
    return true;
}

bool combine() {
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == b[n - j + 1][n - i + 1])
                cnt1++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == b[n - i + 1][j])
                cnt2++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == b[j][i])
                cnt3++;
        }
    }
    int cnt = n * n;
    if (cnt1 == cnt || cnt2 == cnt || cnt3 == cnt)
        return true;
    else
        return false;
}

bool not_change() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}

void solve() {
    if (rotate_90()) {
        printf("1");
        return;
    }
    if (rotate_180()) {
        printf("2");
        return;
    }
    if (rotate_270()) {
        printf("3");
        return;
    }
    if (reflect()) {
        printf("4");
        return;
    }
    if (combine()) {
        printf("5");
        return;
    }
    if (not_change()) {
        printf("6");
        return;
    }
    printf("7");
}

int main() {
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++) {
        scanf("%s", a[i] + 1);
    }
    for (i = 1; i <= n; i++) {
        scanf("%s", b[i] + 1);
    }
    solve();
    return 0;
}