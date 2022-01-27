#include <bits/stdc++.h>

using namespace std;

//存储四个方向
//上下左右顺序
int to_x[4] = {-1, 1, 0, 0};
int to_y[4] = {0, 0, -1, 1};

int mp[40][40];

//标记数组
bool vis[40][40];
int n;

int main() {
    scanf("%d", &n);

    //读入方阵
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }

    //坐标 -> (x, y)
    queue<int> x;
    queue<int> y;

    //起始点横纵坐标
    x.push(0);
    y.push(0);
    vis[0][0] = 1;  //标记为访问过

    //广度优先搜索
    //队列不为空 -> 取值 -> 出队
    while (!x.empty()) {
        //四个方向
        for (int i = 0; i < 4; ++i) {
            //新的位置
            int dx = x.front() + to_x[i];
            int dy = y.front() + to_y[i];

            //判断是否访问过，是否越界
            if (dx >= 0 && dx <= n + 1 && dy >= 0 && dy <= n + 1 &&
                mp[dx][dy] == 0 && !vis[dx][dy]) {  //为 0 且未访问

                //可以访问的点 - > 入队
                x.push(dx);
                y.push(dy);
                vis[dx][dy] = 1;  //标记为访问
            }
        }

        //访问完毕 -> 出队
        x.pop();
        y.pop();
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            //为 0 且未访问过
            if (mp[i][j] == 0 && vis[i][j] == 0)
                printf("2 ");
            else
                printf("%d ", mp[i][j]);
        }
        printf("\n");
    }
    return 0;
}