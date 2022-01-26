#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int n;
int main() {
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    return 0;
}