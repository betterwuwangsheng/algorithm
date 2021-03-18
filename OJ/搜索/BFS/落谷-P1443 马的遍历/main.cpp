#include <bits/stdc++.h>

using namespace std;

/**
    到达某一点的最少步数 ——> 广度优先搜索
*/

//马跳的方向
int to_x[] = {2,2,1,1,-1,-1,-2,-2};
int to_y[] = {1,-1,2,-2,2,-2,1,-1};


///棋盘的大小和马的坐标
int n, m, ss, sy;

//(1 < n, m <= 400)
int mp[410][410];

struct Node {

    //坐标
    int x;
    int y;

    //走的步数
    int step;
};
int main() {

    int sx, sy;
    scanf("%d%d%d%d", &n, &m, &sx, &sy);

    //全部初始化为 -1 -> 不能访问
    memset(mp, -1, sizeof(mp));

    //初始化队列
    queue<Node> Q;

    //初始化队头结点
    Node start;
    start.x = sx;
    start.y = sy;
    start.step = 0;

    //入队头
    Q.push(start);

    //标记
    mp[sx][sy] = 0;

    //队列非空
    while(!Q.empty()) {

        //八个方向
        for(int i = 0; i < 8; ++i) {
            int dx = to_x[i] + Q.front().x;
            int dy = to_y[i] + Q.front().y;

            //判断
            //1 <= x <= n
            //1 <= y <= m
            if(dx >= 1 && dx <= n && dy >= 1 && dy <= m && mp[dx][dy] == -1) {
                Node b;
                b.x = dx;
                b.y = dy;

                //步数增加 1
                b.step = Q.front().step + 1;

                //入队
                Q.push(b);
                mp[dx][dy] = Q.front().step + 1;
            }
        }
        Q.pop();
    }

    //输出
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cout << left << setw(5) << mp[i][j];
        }
        cout << endl;
    }
    return 0;
}
