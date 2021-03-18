#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 110;
bool vis[MAXN];

ll ans = 0;
int n, k, num;
void dfs(int a) {
    if(a == n) { //到达最后一层
        ans++;
        return ;
    }
    for(int i = a + 1; i <= a + 3; i++) {//一次能上一阶、两阶或三阶台阶
        if(i > n)//越界
            continue;
        if(!vis[i]) { //未访问过

            vis[i] = 1;//标记
            dfs(i);
            vis[i] = 0;
        }
    }
}
int main() {
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        cin >> num;
        vis[num] = 1; //楼梯损坏
    }

    vis[0] = 1; //标记为已访问
    dfs(0);
    cout << ans << endl;
    return 0;
}
