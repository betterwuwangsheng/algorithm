#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    scanf("%d", &x);
    printf("Today, I ate ");
    if (x <= 1)
        printf("%d apple.", x);
    else
        printf("%d apples.", x);
    return 0;
}