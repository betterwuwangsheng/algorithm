#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);
    if (t == 0)
        printf("0");
    else if (s / t > m)
        printf("0");
    else if (s % t == 0)
        printf("%d", m - s / t);
    else
        printf("%d", m - (s / t + 1));
    return 0;
}