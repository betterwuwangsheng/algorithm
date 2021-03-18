#include <bits/stdc++.h>

using namespace std;

const int MAXN = 55;
int n, m;
int mp[MAXN][MAXN];
int vis[MAXN][MAXN][4];

//起始点和目标点左上角网格的行与列，起始时的面对方向（东E，南S，西W，北N）
int sx, sy, tx, ty;

//四个方向
int xx[] = {-1,0,1,0};
int yy[] = {0,1,0,-1};
struct Robot {
    int x, y, step, dir;
};

//广搜 ->适合求解最短(最少)步数
int main() {
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            int num;
            scanf("%d", &num);
            if(num)
                //四个角无法访问
                mp[i][j] = mp[i - 1][j] = mp[i][j - 1] = mp[i - 1][j - 1] = 1;
        }
    }

    //初始化队列
    queue<Robot> Q;
    char c;
    scanf("%d %d %d %d %c", &sx, &sy, &tx, &ty, &c);

    //初始化队首元素
    Robot first;
    first.x = sx;
    first.y = sy;
    first.step = 0;

    if(c == 'N')
        first.dir = 0;
    if(c == 'E')
        first.dir = 1;
    if(c == 'S')
        first.dir = 2;
    if(c == 'W')
        first.dir = 3;

    //入队
    Q.push(first);

    //BFS
    while(!Q.empty()) {

        first = Q.front();

        //标记
        vis[first.x][first.y][first.dir] = 1;

        //到达终点
        if(first.x == tx && first.y == ty) {

            //输出步数
            cout << first.step << endl;
            return 0;
        }

        Robot r = first;
        r.step++;
        r.dir = (r.dir + 1) % 4;

        //为访问过
        if(!vis[r.x][r.y][r.dir]) {

            //入队
            Q.push(r);
        }
        r.dir = (r.dir + 2) % 4;
        if(!vis[r.x][r.y][r.dir]) {

            //入队
            Q.push(r);
        }

        r.dir = first.dir;
        r.x += xx[r.dir];
        r.y += yy[r.dir];

        if(r.x >= 1 && r.x < n && r.y >= 1 && r.y < m &&!vis[r.x][r.y][r.dir] && !mp[r.x][r.y]) {
            Q.push(r);
            r.x += xx[r.dir];
            r.y += yy[r.dir];

            if(r.x >= 1 && r.x < n && r.y >= 1 && r.y < m &&!vis[r.x][r.y][r.dir] && !mp[r.x][r.y]) {
                Q.push(r);

                r.x += xx[r.dir];
                r.y += yy[r.dir];
                if(r.x >= 1 && r.x < n && r.y >= 1 && r.y < m &&!vis[r.x][r.y][r.dir] && !mp[r.x][r.y]) {
                    Q.push(r);
                }
            }
        }
        Q.pop();
    }

    //未找到
    cout << -1 << endl;
    return 0;
}
