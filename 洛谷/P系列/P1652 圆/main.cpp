#include <bits/stdc++.h>

using namespace std;

double dis(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main() {
    int x1, y1, x2, y2, ans = 0;
    int y[105][3], n;
    cin >> n;
    for (int i = 0; i < 3; i++)  //读入
        for (int j = 0; j < n; j++)
            cin >> y[j][i];
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = 0; i < n; i++)
        if (dis(x1, y1, y[i][0], y[i][1]) < y[i][2] !=
            dis(x2, y2, y[i][0], y[i][1]) < y[i][2])
            ans++;        //计入总数
    cout << ans << endl;  //输出
    return 0;
}