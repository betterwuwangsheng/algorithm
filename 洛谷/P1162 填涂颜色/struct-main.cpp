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

struct node {
    int x;
    int y;
};

int main() {
    scanf("%d", &n);

    //读入
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }

    //初始化队列
    queue<node> q;

    //从外层(假想的 0 圈开始搜索)
    node start;
    start.x = 0;
    start.y = 0;

    //起点入栈
    q.push(start);

    //标记 [0,0] 已访问
    vis[0][0] = 1;

    //栈非空
    while (!q.empty()) {
        //取出队头元素
        start = q.front();

        //队首元素出队
        q.pop();

        //上下左右遍历
        for (int i = 0; i < 4; ++i) {
            node b;
            b.x = start.x + to_x[i];
            b.y = start.y + to_y[i];

            //判断是否可以访问
            if (b.x >= 0 && b.x <= n + 1 && b.y >= 0 && b.y <= n + 1 &&
                mp[b.x][b.y] == 0 && !vis[b.x][b.y]) {
                //可以访问 -> 入队
                q.push(b);

                //标记 [dx,dy] 已访问
                vis[b.x][b.y] = 1;
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            //为 0 且未访问的
            if (mp[i][j] == 0 && vis[i][j] == 0) {
                //输出 2
                printf("2");
            } else {
                //其余直接输出
                printf("%d", mp[i][j]);
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}