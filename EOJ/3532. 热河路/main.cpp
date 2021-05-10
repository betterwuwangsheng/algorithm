#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e9 + 10;
bool num[MAXN] = {false};

int main() {
    int cnt = 0; //记录 1 出现的位置
    for(int i = 1; i <= MAXN; i += cnt) {
        num[i] = 1;
        cnt++;
    }

    int n, pos;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &pos);
        printf("%d\n", num[pos]);
    }
    return 0;
}
