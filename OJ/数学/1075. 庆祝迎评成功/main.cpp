#include <bits/stdc++.h>

using namespace std;

//平面分空间
//=(n^3+5n)/6+1
int main()
{
    int n;
    while(scanf("%d", &n) != EOF && n)
        printf("%d\n", (n * n * n + 5 * n) / 6 + 1);
    return 0;
}
