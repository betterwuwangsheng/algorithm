#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 510;
const int MOD = 1000000007;

ll matrix_a[MAXN][MAXN];
ll matrix_b[MAXN][MAXN];
ll matrix_c[MAXN][MAXN];

int main() {
    int n, p, m;
    cin >> n >> p >> m;

    //读入 n * p 矩阵
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> matrix_a[i][j];
        }
    }

    //读入 p * m 矩阵
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix_b[i][j];
        }
    }

    //计算
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                // c[i][k] = a[i][j] * b[j][k]
                matrix_c[i][k] += matrix_a[i][j] * matrix_b[j][k];

                //确保取模后为正数
                matrix_c[i][k] += MOD;
                matrix_c[i][k] %= MOD;
            }
        }
    }

    //输出
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix_c[i][j] += MOD;
            matrix_c[i][j] %= MOD;
            cout << matrix_c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}