#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, minn = INT_MAX;
    scanf("%d%d", &a, &b);
    printf("%d", a / __gcd(a, b) * b);
    return 0;
}
