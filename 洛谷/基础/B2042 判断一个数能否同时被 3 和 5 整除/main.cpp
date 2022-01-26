#include <iostream>

using namespace std;

typedef long long LL;

int main() {
    LL n;
    scanf("%lld", &n);
    if (n % 3 == 0 && n % 5 == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}