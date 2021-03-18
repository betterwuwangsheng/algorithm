#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    int x[1000];
    int y[1000];

    while(scanf("%d",&n) != EOF) {
        if(n == 0)
            break;
        int  sum = 0;
        double ans = 0;
        for(int i = 1; i <= n; i++) {
            scanf("%d %d", &x[i], &y[i]);
        }

        for(int k = 1; k <= n - 1; k++) {
            sum = sum + (x[k] * y[k + 1] - x[k + 1] * y[k]);

        }
        sum = sum + (x[n] * y[1] - y[n] * x[1]);
        ans = 0.5 * abs(sum);
        printf("%.1f\n", ans);
    }
}
