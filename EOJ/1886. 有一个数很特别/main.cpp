#include <bits/stdc++.h>

const int MAXN = 1e6 + 10;
int flag[MAXN] = {0};

using namespace std;

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        memset(flag, 0, sizeof(flag)); // 清零
        for(int i = 1; i <= n; ++i) {
            int num;
            scanf("%d", &num);
            flag[num]++;//映射
        }
    }
    return 0;
}
