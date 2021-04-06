#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int maxx = INT_MIN;
    int minn = INT_MAX;
    int num;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        maxx = max(num, maxx);
        minn = min(num, minn);
    }
    printf("%d", maxx - minn);
    return 0;
}