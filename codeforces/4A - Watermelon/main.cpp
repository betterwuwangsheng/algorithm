#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    scanf("%d", &w);

    //����һ������ 2Ҳһ������
    printf((w & 1 || w == 2) ? "NO" : "YES");
    return 0;
}
