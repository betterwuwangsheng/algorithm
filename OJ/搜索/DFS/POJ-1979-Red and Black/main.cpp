#include <bits/stdc++.h>

using namespace std;

int w, h, ans;


//存储瓷砖分布
char mp[25][25];

//标记数组是否已经访问过
int vis[25][25];

/**
       -1,0
  0,-1  0,0 0,1
        1,0
*/
//存储四个方向
//上下左右顺序
int to_x[4] = {-1, 1, 0, 0};
int to_y[4] = {0, 0, -1, 1};

//深度搜索
void dfs(int x, int y) { //当前坐标

    //红色瓷砖不可以走
    if(mp[x][y] == '#')
        return;

    //其他瓷砖可以走 ——>标记
    //修改为访问过
    vis[x][y] = 1;
    ans++;

    //遍历四个方向
    for(int i = 0; i < 4; ++i) {
        int xx = to_x[i] + x;
        int yy = to_y[i] + y;

        //在瓷砖分布图内且未访问过 -> 继续深搜
        if(xx >= 1 && xx <= h && yy >= 1 && yy <= w &&  !vis[xx][yy]) {

            //递归深搜
            dfs(xx, yy);
        }
    }
}
int main() {

    while(scanf("%d%d", &w, &h) != EOF) {
        if(w == 0 && h == 0)
            break;

        ans = 0;

        //记录深搜起始位置
        int x, y;

        //读入瓷砖分布
        for(int i = 1; i <= h; ++i) {
            for(int j = 1; j <= w; ++j) {

                cin >> mp[i][j];
                vis[i][j] = 0;

                //起点位置
                if(mp[i][j] == '@') {

                    //记录起点位置
                    x = i;
                    y = j;
                }
            }
        }

        //深度优先搜索
        dfs(x, y);
        printf("%d\n", ans);
    }
    return 0;
}
