#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= i; j++)
                scanf("%d", &a[i][j]);

        for (int i = n - 1; i >= 1; i--)
            for (int j = 1; j <= i; j++)
                a[i][j] += min(a[i + 1][j], a[i + 1][j + 1]); //dp
        printf("%d\n", a[1][1]);
    }
    return 0;
}
