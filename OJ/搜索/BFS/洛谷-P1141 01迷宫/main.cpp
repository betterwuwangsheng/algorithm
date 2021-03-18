#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

//标记是否访问过
int vis[MAXN][MAXN];

//存储图形
bool mp[MAXN][MAXN];


int ans[MAXN * MAXN];
// BFS 的四个方向
int to_x[4] = {0, 1, 0, -1};
int to_y[4] = {1, 0, -1, 0};

int n, m;

//记录连通块数量
int color;

//记录数量
int cnt = 0;

void bfs(int x, int y) {

    //记录行
    queue<int> line;

    //记录列
    queue<int> col;

    line.push(x);
    col.push(y);

    //标记为已访问
    vis[x][y] = color;

    while(!line.empty()) {

        //四个方向移动
        for(int i = 0; i < 4; ++i) {

            //新的位置
            //行增加
            int dx  = line.front() + to_x[i];

            //列增加
            int dy  = col.front() + to_y[i];

            //判断是否合理
            if(dx >= 1 && dx <= n && dy >= 1 && dy <= n && !vis[dx][dy] && mp[dx][dy] != mp[line.front()][col.front()]) {

                //入队
                line.push(dx);
                col.push(dy);

                //标记为已访问
                vis[dx][dy] = color;
            }

        }

        //队首元素出队
        line.pop();
        col.pop();

        //数量增加 -> 每一次广搜增加一个
        cnt++;
    }
}
int main() {

    scanf("%d%d", &n, &m);

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            char c;
            cin >> c;

            if(c == '1')
                mp[i][j] = 1;
            else
                mp[i][j] = 0;
        }
    }

    //遍历 ——> BFS
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {

            //未被搜索 -> 为访问过
            if(!vis[i][j]) {

                //新的连通块 -> 连通块数量增加
                color++;

                //广度优先搜索
                bfs(i, j);

                //记录某序号连通块的数量
                ans[color] = cnt;

                //清零
                cnt = 0;
            }
        }
    }

    //询问
    for(int i = 1; i <= m; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);

        printf("%d\n", ans[vis[x][y]]);
    }
    return 0;
}
