#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3100;
int dp[MAXN][MAXN];////记录以 s[i] 和 t[j] 为结尾的的最长公共子序列长度

int main() {
    string s, t;
    cin >> s >> t;

    int lens = s.length();
    int lent = t.length();

    for(int i = 1; i <= lens; ++i) {
        for(int j = 1; j <= lent; ++j) {
            if(s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    string ans = "";
    int i = lens, j = lent;
    while(i > 0 && j > 0) {
        if(s[i - 1] == t[j - 1]) {//相同 -> 指针后移
            ans += s[i - 1];
            i--;
            j--;
        } else if(dp[i - 1][j] > dp[i][j - 1]) {//上方元素大于左边元素
            i--; //移动行
        } else {
            j--;//移动列
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
    return 0;
}
