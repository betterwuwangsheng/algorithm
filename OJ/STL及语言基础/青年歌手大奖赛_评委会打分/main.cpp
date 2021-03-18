#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int score[101];
    while (scanf("%d", &n) != EOF) {
        for (int i = 1; i <= n; i++)
            scanf("%d", &score[i]);

        sort(score + 1, score + 1 + n);

        int sum = 0;
        for (int i = 2; i <= n - 1; i++)
            sum += score[i];

        printf("%.2lf\n", 1.0 * sum / (n - 2));
    }
    return 0;
}
