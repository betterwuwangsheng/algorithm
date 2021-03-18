#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;
int dp[MAXN], a[MAXN];
int s[MAXN] = {0};

int main() {
    int n;
    cin >> n;

    bool flag = false;
    for(int i = 0; i<n; i++) {
        cin>>a[i];

        //接收数组元素
        if(a[i] > 0)
            flag = true;//只要有一个元素大于0，则将flag 置为true
    }
    if(flag == false)
        printf("0 %d %d", a[0], a[n-1]);//如果所有的元素都为0， 则将0为最大，并且输出首尾位置的元素


    //边界条件
    dp[0] = a[0];

    for(int i = 1; i<n; i++) {
        //状态转移方程
        //不适用 if 条件判断的话，dp[i] = max(a[i], dp[i-1] + a[i]);

        if(dp[i - 1] + a[i] > a[i]) {
            dp[i] = dp[i - 1] + a[i];
            s[i] = s[i - 1];
        } else {
            dp[i] = a[i];
            s[i] = i;
        }
    }
    int k = 0;
    for(int i = 1; i<n; i++) {
        if(dp[i]>dp[k]) {
            k = i;
        }
    }
    printf("%d %d %d", dp[k], a[s[k]], a[k]);
}
