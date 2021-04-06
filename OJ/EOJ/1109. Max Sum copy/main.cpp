#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;
int pre_sum[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);

        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int num;
            scanf("%d", &num);
            sum += num;
            pre_sum[i] = sum;
        }
        sort(pre_sum, pre_sum + n, greater<int>());
        cout << pre_sum[0] << endl;
    }
    return 0;
}
