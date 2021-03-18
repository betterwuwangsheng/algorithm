#include <bits/stdc++.h>

using namespace std;

int n;
int res[20];
int vis[20];
void dfs(int now) { //now 当前要填写的是第几个数字

    if(now > n) {
        for(int i = 1; i <= n; ++i)
            cout << setw(5) << res[i];
        cout << endl;
    }

    for(int i =1; i <= n; ++i) { //寻找一个未被使用过的数字
        if(!vis[i]) {
            //使用该数字
            res[now] = i;

            //标记使用过
            vis[i] = 1;

            dfs(now + 1);

            //回溯 -> 回到之前的状态
            vis[i] = 0;
        }
    }
}
int main() {

    cin >> n;
    dfs(1);
    return 0;
}
