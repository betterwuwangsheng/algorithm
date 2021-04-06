#include <bits/stdc++.h>

using namespace std;

int a[1010];
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    //ÅÅÐò
    sort(a, a + n);

    int sum = 0;
    for (int i = 1; i < n - 1; ++i)
        sum += a[i];

    printf("%.2lf", (double)sum / (n - 2));
    return 0;
}