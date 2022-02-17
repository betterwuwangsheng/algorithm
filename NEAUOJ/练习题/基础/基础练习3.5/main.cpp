#include <iostream>

using namespace std;

typedef long long LL;

int main()
{
    int x;
    scanf("%d", &x);

    int t;
    LL res = 1;
    while (x)
    {
        t = x % 10;
        x = x / 10;

        res *= t;
    }
    printf("%lld", res);
    return 0;
}