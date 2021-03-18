#include <bits/stdc++.h>

using namespace std;

const int MAXN = 210;
int a[MAXN], b[MAXN], ans[MAXN];
int main() {
    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        string x, y;
        cin >> x >> y;

        //获取长度
        int lx = x.length();
        int ly = y.length();

        //转换为 int
        for(int i = 0; i < lx; ++i)
            a[lx - i] = x[i] - '0';
        for(int i = 0; i < ly; ++i)
            b[lx - i] = y[i] - '0';

        printf("case #%d:\n", caseNum++);
    }
    return 0;
}
