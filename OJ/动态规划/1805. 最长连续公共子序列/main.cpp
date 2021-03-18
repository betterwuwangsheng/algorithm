#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int maxx = 0;
int dp[50125] = {0}; ////记录以 a[i] 和 b[j] 为结尾的的最长连续公共子序列长度
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int len_a = a.size();
    int len_b = b.size();
    for (int i = 1; i <= len_a; i++) {
        for (int j = len_b; j > 0; j--) {
            if (a[i - 1] == b[j - 1]) { //最长公共子序列
                dp[j] = dp[j - 1] + 1;  //最长连续公共子序列长度 + 1
                maxx = max(dp[j], maxx);
            } else dp[j] = 0;//不是公共子序列 -> 0
        }
    }
    cout << maxx << endl;
    return 0;
}
