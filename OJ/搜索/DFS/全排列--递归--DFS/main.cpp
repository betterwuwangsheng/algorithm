#include <bits/stdc++.h>

using namespace std;

int res[3];
int vis[3];
void dfs(int now) { //now 当前要填写的是第几个数字

    if(now == 4) {

        for(int i = 1; i <= 3; ++i)
            cout << res[i] << " ";
        cout << endl;
        return;
    }

    for(int i =1; i <= 3; ++i) { //寻找一个未被使用过的数字
        if(vis[i])
            continue;

        //使用该数字
        res[now] = i;

        //标记使用过
        vis[i] = 1;

        dfs(now + 1);

        //回溯 -> 回到之前的状态
        vis[i] = 0;
    }
}
int main() {

    dfs(1);
    return 0;
}
