#include <bits/stdc++.h>

using namespace std;

const int MAXN = 21;
int a[MAXN][MAXN];
int main() {
    int n;
    cin >> n;

    //构造图形
    for (int i = 0; i < n; ++i) {       //行
        a[i][0] = 1;                    //第一列全为 1
        for (int j = 1; j <= i; ++j) {  //列
            if (j == i)
                a[i][j] == 1;
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  //左上 + 上方
        }
    }

    //输出
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
