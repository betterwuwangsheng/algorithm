#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
struct Node {
    int x, y;
};
Node node[MAXN];

int main() {
    int n;
    scanf("%d", &n);

    int x, y;
    for(int i = 0; i < n; ++i) {
        scanf("%d%d", &x, &y);
        node[i].x = x;
        node[i].y = y;
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(node[i].x == node[j].x || node[i].y == node[j].y ||  (abs(node[i].x - node[j].x) == abs(node[i].y - node[j].y)) )//所在行, 列, 对角线(行之差为 1)有皇后 -> 数量增加
                cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
