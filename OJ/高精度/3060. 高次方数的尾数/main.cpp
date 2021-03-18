#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 1e7;
LL ans[MAXN];

void solve(LL a, LL b) {

    memset(ans, 0, sizeof(ans));
    ans[0] = ans[1] = 1;

    for(int i = 1; i <= b; ++i) {
        int c = 0;
        for(int j = 1; j <= ans[0]; ++j) {
            ans[j] = ans[j] * a + c;
            c = ans[j] / 10;
            ans[j] %= 10;
        }

        while(c) {//多个进位
            ans[++ans[0]] = c % 10;
            c /= 10;
        }
    }
}
int main() {

    //用例数
    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {


        LL a;
        int b, n;
        cin >> a >> b >> n;

        solve(a, b);
        printf("case #%d:\n", caseNum++);
        for(int i = n; i >= 1; --i)
            cout << ans[i];
        cout << endl;
    }
    return 0;
}
