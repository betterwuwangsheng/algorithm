#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    return floor((a + b) / 2);
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", solve(a, b));
    return 0;
}
