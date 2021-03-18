#include <bits/stdc++.h>

using namespace std;

const int MAXN = 59;
typedef long long LL;

//LL a[MAXN];
LL dp[MAXN];//记录到 n 阶楼梯总共有多少种不同走法

void init(){
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    for(int i = 5; i < MAXN; ++i)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
}
int main() {

    init();
    int t;
    cin >> t;

    int caseNum = 0;
    while(t--){
        int n;
        cin >> n;
        printf("case #%d:\n%lld\n", caseNum++, dp[n]);
    }
    return 0;
}
