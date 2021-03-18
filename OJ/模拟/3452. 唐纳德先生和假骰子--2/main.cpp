#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int ans[10], n, a[6], b[6];
    cin >> n;
    for (int i=0; i<6; ++i)
        cin >> a[i];
    for (int i=0; i<6; ++i)
        cin >> b[i];

    for (int i=0; i<6; ++i) {
        for (int j = 0; j<6; ++j) {
            ans[(a[i] + b[j]) % n]++;
        }
    }
    int flag = 1, cnt = ans[0];
    for (int i = 0; i < n; ++i) {
        if (ans[i] != cnt) {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
