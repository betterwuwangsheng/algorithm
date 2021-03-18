#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 10;
int num[MAXN];
int dp[MAXN];  //记录以 num[i] 为结尾的最大子序列和

int main () {
    int n;
    while (scanf("%d", &n) != EOF && n) {
        for (int i = 1; i <= n; ++i)
            scanf("%d", &num[i]);

        int maxx = num[1];
        int start = 1, end = 1; //临时首尾元素
        int first = 1, last = 1;//最大子序列整个序列的首尾元素位置
        dp[1] = num[1]; //初始化 dp[1]

        for (int i = 2; i <= n; ++i) {
            if (dp[i - 1] + num[i] > num[i]) {
                dp[i] = dp[i - 1] + num[i];//更新最大子序列和
                end = i; //记录该最大子序列和的开始(1)和结束位置
            } else {
                dp[i] = num[i];//更新最大值
                start = end = i;//记录该最大子序列和的起始结束位置
            }

            if (dp[i] > maxx) { //比较最大值
                first = start;//记录该最大子序列和的起始结束位置
                last = end;
                maxx = dp[i]; //记录以 num[i] 为结尾的最大子序列和
            }
        }

        //若所有 K 个元素都是负数，则定义其最大和为 0
        if (maxx < 0) printf("%d %d %d\n", 0, num[1], num[n]);
        else printf("%d %d %d\n", maxx, num[first], num[last]);
    }
    return 0;
}
