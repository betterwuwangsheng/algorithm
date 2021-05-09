#include <bits/stdc++.h>

using namespace std;

//四个方向
int to_x[] = {-1, 0, 1, 0};
int to_y[] = {0, 1, 0, -1};

//记录矩形阵列
int mp[110][110];

//标记是否访问
bool vis[110][110];

int n, m, cnt = 0;
int main() {
    scanf("%d%d", &n, &m);

    //读入矩形
    char ch;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> ch;
            mp[i][j] = ch - '0';
        }
    }

    //记录横纵坐标
    queue<int> x;
    queue<int> y;

    //初始化
    x.push(0);
    y.push(0);
    vis[0][0] = 1;  //标记为访问

    //队列不空
    while (!x.empty()) {
        //遍历四个方向
        for (int i = 1; i <= 4; ++i) {
            int dx = x.front() + to_x[i];
            int dy = y.front() + to_y[i];

            //判断边界
            if (dx >= 0 && dx <= m + 1 && dy >= 0 && dy <= n + 1 &&
                !vis[dx][dx] && 1 <= mp[dx][dy] && mp[dx][dy] <= 9) {
                //入队
                x.push(dx);
                y.push(dy);
                vis[dx][dy] = 1;  //标记为访问
                cnt++;
            }
        }

        //访问完毕出队
        x.pop();
        y.pop();
    }
    printf("%d", cnt);
    return 0;
}