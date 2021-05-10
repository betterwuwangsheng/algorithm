#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e9 + 10;
int main() {

    vector<bool> vt(MAXN, false); // 初始化了 MAXN 个默认值为 0 的元素
    int cnt = 1;
    for(int i = 0; i <= MAXN; i += cnt) {
        vt[i] = true;
        cnt++;
    }

    int n, pos;
    scanf("%d", &n);

    while(n--) {
        scanf("%d", &pos);
        printf("%d\n", vt[pos - 1]);
    }
    return 0;
}
