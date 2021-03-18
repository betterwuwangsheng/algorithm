#include <bits/stdc++.h>

using namespace std;

/**
    f[i][j]: 表示序列 a 和序列 b 的最长公共子序列长度

    分析: -> 考察末尾元素是否在公共子序列中
        1. a[i] = b[j] (末尾元素相同), 则 a[i] b[j] 在公共子序列中
           a[1....., i-1, i] a[1....., i-1] + a[i]
           b[1....., j-1, j] b[1....., j-1] + b[j]
           所以 f[i][j] = f[i - 1][j - 1] + 1 -> 数量增加
        2. a[i] != b[j] (末尾元素不相同, 且 a[i] 不再公共子序列中), 则去掉 a[i]
           a[1....., i-1, i] a[1....., i-1]
           b[1....., j-1, j] b[1....., j-1, j]
           所以 f[i][j] = f[i - 1][j]
        3. a[i] != b[j] (末尾元素不相同, 且 b[j] 不再公共子序列中), 则去掉 a[j]
           a[1....., i-1, i] a[1....., i-1, i]
           b[1....., j-1, j] b[1....., j-1]
           所以 f[i][j] = f[i][j - 1]

                    = max(f[i][j - 1], f[i - 1][j]), a[i] != b[j]
           f[i][j]
                    = f[i - 1][j - 1] + 1 , a[i] = b[i]

            边界条件
            f[0][j] = 0
            f[i][0] = 0
*/
int dp[100];
int flag[100]; //标记前驱位置
int main() {

    for(int i = 0; i < m; ++i) {
        for(int j  = 0; j < n; ++j) {
            if(a[i] == b[i])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(f[i][j - 1], f[i - 1][j]);
        }
    }

    printf("%d\n", dp[m][n]);


    /**
        带输出序列的最长公共子序列
    */

    for(int i = 0; i < m; ++i) {
        for(int j  = 0; j < n; ++j) {
            if(a[i] == b[i]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                flag[i][j] = 1; //左上方
            }
            else if(f[i][j - 1] > f[i - 1][j]) { //左边的值 > 上边的值
                f[i][j] = f[i][j - 1];
                flag[i][j] = 2; //左边
            } else { //左边的值 < 上边的值 -> 去上边的值
                f[i][j] = f[i - 1][j];
                flag[i][j] = 3; //上边
            }
        }
    }
    return 0;
}
