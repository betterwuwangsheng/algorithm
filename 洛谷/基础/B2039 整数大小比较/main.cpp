#include <iostream>

using namespace std;

typedef long long LL;

int main() {
    LL x, y;
    scanf("%lld %lld", &x, &y);

    if (x < y)
        printf("<");
    else if (x > y)
        printf(">");
    else
        printf("=");
    return 0;
}