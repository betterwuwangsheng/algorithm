#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][3];

    //读入
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> matrix[i][j];

    int sum = 0, cnt = 0;

    //按列求和
    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < n; ++i) {
            sum += matrix[i][j];
        }
        if (sum == 0)
            cnt++;
        else
            sum = 0;
    }
    if (cnt == 3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}