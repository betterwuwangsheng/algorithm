#include <bits/stdc++.h>

using namespace std;

int a[] = {-2,1,-3,4,-1,2,1,-5,4};
int sum[105];

int main() {
    for(int i = 1; i <= 8; ++i) {
        sum[i] = sum[i - 1] + a[i];
    }

    int maxx = -1e9;
    for(int i = 0; i <= 8; ++i) {
        for(int j = 0; j <= 8; ++j) {
            maxx = max(maxx, sum[j] - sum[j - 1]);
        }
    }

    printf("%d\n", maxx);
    return 0;
}
