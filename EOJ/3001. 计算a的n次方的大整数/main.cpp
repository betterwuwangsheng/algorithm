#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
const int MAXN = 9e7 + 10;
LL ans[MAXN];

void solve(LL a, LL b) {
    ans[0] = ans[1] = 1; //a[0] 代表结果值的长度

    for(int i = 1; i <= b; ++i) {
        int c = 0; //进位
        for(int j = 1; j <= ans[0]; ++j) {
            ans[j] = ans[j] * a + c;//a^b
            c = ans[j] / 10;
            ans[j] %= 10;
        }

        while(c) {
            ans[++ans[0]] = c % 10;
            c /= 10;
        }
    }
}

int main() {
    int t;
    cin >> t;
    int caseNum = 0;
    while(t--) {
        LL a, b;
        cin >> a >> b;
        solve(a, b);
        printf("case #%d:\n", caseNum++);

        //倒序输出
        for(int i = ans[0]; i >= 1; --i)
            cout << ans[i];
        printf("\n");
    }
    return 0;
}
