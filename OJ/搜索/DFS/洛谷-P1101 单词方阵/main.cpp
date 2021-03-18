#include <bits/stdc++.h>

using namespace std;
const int MAXN = 110;
char a[MAXN][MAXN];

int vis[MAXN][MAXN];

int n;

//八个方向
int xx[] = {1,1,1,0,0,-1,-1,-1};
int yy[] = {1,0,-1,1,-1,1,0,-1};

string s = "yizhong";

void dfs(int x, int y) {

    //枚举八个方向
    for(int i = 0; i < 8; ++i) {
        int flag = 1;
        for(int j = 0; j < 7; ++j) {

            int dx = x + j * xx[i];
            int dy = y + j * yy[i];

            //不能越界
            if(dx < 1 || dx > n || dy < 1 || dy > n || s[j] != a[dx][dy]) {
                flag = 0;
                break;
            }

        }
        if(flag) {
            for(int j = 0; j < 7; ++j) {
                int dx = x + j * xx[i];
                int dy = y + j * yy[i];

                vis[dx][dy] = 1;
            }
        }
    }
}
int main() {

    cin >> n;
    for(int i =1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i =1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {

            if(a[i][j] == 'y') {
                dfs(i, j);
            }
        }
    }
    for(int i =1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {

            //未找到
            if(!vis[i][j]) {
                cout << "*";
            } else
                cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
