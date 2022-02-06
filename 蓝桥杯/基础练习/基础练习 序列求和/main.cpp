#include <iostream>

using namespace std;

typedef long long LL;

int n;
LL sum = 0;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("%lld\n", sum);
    return 0;
}