#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 10;
int a[MAXN];

int main() {
    int n, cnt = 1, maxx = 1;
    cin >> n;

    //��������
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    //�����
    for (int i = 0; i < n; ++i)
        if (a[i + 1] - a[i] == 1) {
            cnt++;
            maxx = max(maxx, cnt);
        } else
            cnt = 1;
    cout << maxx;
    return 0;
}