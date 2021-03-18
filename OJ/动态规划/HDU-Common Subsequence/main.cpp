#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000;
int dp[MAXN][MAXN]; //记录以 a[i] 和 b[j] 为结尾的的最长公共子序列长度
string a, b;

int main() {
    while(cin >> a >> b) {
        int lena = a.length();
        int lenb = b.length();

        memset(dp, 0, sizeof(dp));

        for(int i = 1; i <= lena; ++i) { //从 1 开始
            for(int j = 1; j <= lenb; ++j) {
                if(a[i - 1] == b[j - 1]) //末尾相同
                    dp[i][j] = dp[i  - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);//指针指向位置字符不相同 -> 取两者最大值
            }
        }
        printf("%d\n", dp[lena][lenb]);
    }
    return 0;
}
