#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
string s[22];

//标记是否访问过 -> 最多两次
int vis[22] = {0};

void dfs(string x, int len) { // x -> 代表前面的字符串

    //寻找长度最大值
    ans = max(ans, len);

    //搜索
    for(int i = 1; i <= n; ++i) {

        int p = 1;
        int la = x.length();
        int lb = s[i].length();

        while(p < min(la, lb)) {

            //尾部 = 头部
            if(vis[i] < 2 && x.substr(la - p) == s[i].substr(0, p)) {

                vis[i]++;
                dfs(s[i], len + lb - p);

                //回溯
                vis[i]--;
                break;
            }
            p++;
        }
    }
}
int main() {
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
        cin >> s[i];
    }

    char c;
    cin >> c;
    for(int i = 1; i <= n; ++i) {

        //s[i][0] 某一字符串的第一个字符
        if(s[i][0] == c) {

            vis[i]++;

            //深搜
            dfs(s[i], s[i].length());
            vis[i]--;
        }
    }

    cout << ans << endl;
    return 0;
}
