#include <bits/stdc++.h>

using namespace std;

int a[105][105] = {
    {9},
    {12, 15},
    {10, 6, 8},
    {2, 18, 9, 5},
    {19, 7, 10, 4, 16}
};

int  dp[105][105];
int main() {

    dp[0][0] = a[0][0];
    for(int i = 1; i <= 4; ++i) {
        for(int j = 0; j < i; ++j) {
            if(j == 0)
                dp[i][j] = dp[i - 1][j] + a[i][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + a[i][j]);
        }
    }

    int maxx = 0;
    for(int i = 0; i <= 4; ++i)
        maxx = max(dp[4][i], maxx);
    printf("%d\n", maxx);
    return 0;
}
