#include <bits/stdc++.h>

using namespace std;

//n为行，m为列，t为障碍总数,起点坐标SX,SY，终点坐标FX,FY
int n, m, t, sx, sy, fx, fy, cnt = 0;

//标记是否已经访问过
int vis[10][10];

//标记有无障碍物
int mp[10][10];

//四个方向
int xx[4] = {-1, 1, 0, 0};
int yy[4] = {0, 0, -1, 1};

void dfs(int x, int y) {

    //抵达终点
    if(x == fx && y == fy) {

        //路径增加
        cnt++;
        return ;
    }

    //四个方向
    for(int i = 0; i < 4; ++i) {
        int dx = xx[i] + x;
        int dy = yy[i] + y;

        //判断是否越界并且没有障碍物
        if(dx >= 1 && dx <= n && dy >= 1 && dy <= m && !vis[dx][dy] && !mp[dx][dy]) {

            //标记为访问过
            vis[dx][dy] = 1;

            //深搜下一个位置
            dfs(dx, dy);

            //回溯 -> 上一个位置可能还有到终点的其他路径
            vis[dx][dy] = 0;
        }
    }
}

int main() {
    cin >> n >> m >> t >> sx >> sy >> fx >> fy;

    //读入障碍点
    while(t--) {
        int x, y;
        cin >> x >> y;
        //标记为有障碍
        mp[x][y] = 1;
    }

    //标记为访问过
    vis[sx][sy] = 1;

    //深搜
    dfs(sx, sy);

    cout << cnt << endl;
    return 0;
}
