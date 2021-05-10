#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    double ans = y + (x - z) / 2.0;
    if (ans > 0 && x > ans && y > ans) //0 < ans < 直接各自到家的距离
        printf("%.2f\n", ans);
    else
        printf("Wrong\n");
    return 0;
}
