#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    scanf("%d", &w);

    //奇数一定不行 2也一定不行
    printf((w & 1 || w == 2) ? "NO" : "YES");
    return 0;
}
