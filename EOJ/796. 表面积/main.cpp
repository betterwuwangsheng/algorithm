#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct Node {
    ll r, h, s;//半径，高度，测面积
};

bool cmp(Node x, Node y) {
    return x.s > y.s;
}

int main() {
    int n, m;
    cin >> n >> m;

    Node node[1010];
    for(int i = 0; i < n; ++i) {
        cin >> node[i].r >> node[i].h;
        node[i].s = 2 * node[i].r * node[i].h;
    }

    sort(node, node + n, cmp);

    ll ans = 0;

    //每次选择侧面积最大的并且上半径 < 下半径
    for(int i = 0; i < n; ++i) {

        //可视面积 = 侧面积 + 最大的底面积(半径最大)
        ll sum = node[i].s + node[i].r * node[i].r;
        int cnt = 1;
        for(int j = 0; j < n && cnt < m; ++j) {

            // 上半径 < 下半径
            if(i == j || node[j].r > node[i].r)
                continue;
            sum += node[j].s;
            cnt++;
        }
        if(cnt == m)
            ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
