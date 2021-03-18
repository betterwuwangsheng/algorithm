#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x;
    int res[110];
    while(cin >> n >> x) {

        //n 和 m 同时为 0 表示输入数据的结束，本行不做处理。
        if(n == 0 && x == 0)
            break;

        for(int i = 1; i <= n; i++) {
            cin >> res[i];
        }
        res[n + 1] = x;
        sort(res + 1, res + 2 + n);

        for(int i = 1; i <= n + 1; i++) {
            if(i == 1)
                cout << res[i];
            else
                cout << " " << res[i];
        }
        cout << endl;
    }
    return 0;
}
