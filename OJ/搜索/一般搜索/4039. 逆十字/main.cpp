#include <bits/stdc++.h>

using namespace std;

int n, m;
char mp[110][110];

//四个方向
int xx[] = {-1, 1, 0, 0};
int yy[] = {0, 0, -1, 1};

int cnt = 0;
void bfs(int x, int y) {


    //标记是否为合法十字
    int f = 1;

    //四个方向
    for(int i = 0; i < 4; ++i) {
        //移动
        int dx = x + xx[i];
        int dy = y + yy[i];

        //越界且为 有 # -> 不是合法十字
        if(dx < 0 || dx >= n || dy < 0 || dy >= m || mp[dx][dy] == '#') {
            f = 0; //不是合法十字
            break; //结束循环
        }
    }
    if(f)
        cnt++;
}
int main() {

    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> mp[i][j];
        }
    }

    //搜索
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            //从 . 开始搜索
            if(mp[i][j] == '.')
                bfs(i, j);
        }
    }
    cout << cnt << endl;
    return 0;
}
