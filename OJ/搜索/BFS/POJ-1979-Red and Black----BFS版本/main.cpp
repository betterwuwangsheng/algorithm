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


struct node {
    int x;
    int y;
};

void bfs(int x, int y) {

    //初始化队列
    queue<node> q;

    //初始化队列起点
    node a;
    a.x = x;
    a.y = y;

    //将节点加入队列
    q.push(a);

    //标记
    vis[x][y] = 1;

    //队列非空
    while(!q.empty()) {

        //取出队首元素
        a = q.front();

        //队首元素出队
        q.pop();

        //当前瓷砖可以走
        ans++;

        //上下左右
        //遍历四个方向
        for(int i = 0; i < 4; ++i) {

            node b;
            b.x = to_x[i] + a.x;
            b.y = to_y[i] + a.y;

            //在瓷砖分布图内且未访问过 -> 继续深搜
            if(b.x >= 1 && b.x <= h && b.y >= 1 && b.y <= w &&  !vis[b.x][b.y] && mp[b.x][b.y] != '#') {

                //可以走 -> 加入队列
                q.push(b);

                //标记
                vis[b.x][b.y] = 1;
            }
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
        bfs(x, y);
        printf("%d\n", ans);
    }
    return 0;
}
