#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100005;
int main()
{
    int n;
    scanf("%d", &n);

    int num[MAXN];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }

    sort(num, num + n);
    printf("%d %d", num[n - 1], num[0]);
    return 0;
}