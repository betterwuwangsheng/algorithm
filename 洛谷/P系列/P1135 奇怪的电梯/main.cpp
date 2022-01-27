#include <bits/stdc++.h>

using namespace std;

////广搜 -> 最少
int n, a, b;
int elev[210];
int vis[210];

int main() {
    scanf("%d%d%d", &n, &a, &b);

    memset(vis, 0, sizeof(vis));

    for(int i = 1; i <= n; ++i) {
        scanf("%d", &elev[i]);
    }

    //初始化队列 -> 使用两个队列进行存储
    //存储楼层按钮信息
    queue<int> floor;

    //存储步数
    queue<int> step;

    //初始化队首元素

    //初始化队列
    floor.push(a);
    step.push(0);

    //标记为已访问
    vis[a] = 1;

    //队列非空
    while(!floor.empty()) {

        //到达 b 层
        if(floor.front() == b) {

            //输出步数
            printf("%d", step.front());
            return 0;
        }

        //上   所在楼层按钮信息 elev[floor.front()]
        int t = floor.front() + elev[floor.front()];

        //楼层未访问过且楼层合法
        if(t <= n && !vis[t]) {

            //新到达的楼层
            floor.push(t);

            //步数增加
            step.push(step.front() + 1);

            //标记为已访问
            vis[t] = 1;
        }

        //下   所在楼层按钮信息 elev[floor.front()]
        t = floor.front() - elev[floor.front()];

        if(t >= 1 && !vis[t]) {
            //新到达的楼层
            floor.push(t);

            //步数增加
            step.push(step.front() + 1);

            //标记为已访问
            vis[t] = 1;
        }

        floor.pop();
        step.pop();
    }

    printf("-1");
    return 0;
}
