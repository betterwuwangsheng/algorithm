#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
int a[MAXN][MAXN] = {0};
int main() {
    int n;
    while(cin >> n && n > 0) {

        //构造图形
        for(int i = 0; i < n; ++i) {
            for(int j = 1; j <= n - i; ++j) {
                a[i][j] += j;
            }
            cout << endl;
        }
    }
    return 0;
}
