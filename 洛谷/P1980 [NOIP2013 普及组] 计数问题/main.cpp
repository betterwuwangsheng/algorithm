#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    scanf("%d%d", &n, &x);

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        while (i) {
            int t = i % 10;
            if (i == 1)
                cnt++;
            t /= 10;
        }
    }
    printf("%d\n", cnt);
    system("pause");
    return 0;
}
